 
#include <iostream>
#include <string>
using namespace std;

void printDirectory(string mobile[], string home[], int size) {
    cout << "Mobile Numbers\tHome Numbers\n";
    for (int i = 0; i < size; i++) {
        cout << mobile[i] << "\t\t" << home[i] << endl;
    }
}

void sortByMobile(string mobile[], string home[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mobile[j] > mobile[j + 1]) {
                swap(mobile[j], mobile[j + 1]);
                swap(home[j], home[j + 1]);
            }
        }
    }
    cout << "Sorted by mobile numbers.\n";
}

void sortByHome(string mobile[], string home[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (home[j] > home[j + 1]) {
                swap(home[j], home[j + 1]);
                swap(mobile[j], mobile[j + 1]);
            }
        }
    }
    cout << "Sorted by home numbers.\n";
}

int main() {
    string mobile[] = { "0671234567", "0509876543", "0735554443" };
    string home[] = { "1234567", "7654321", "5555555" };
    int size = 3;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Sort by mobile numbers\n";
        cout << "2. Sort by home numbers\n";
        cout << "3. Show directory\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            sortByMobile(mobile, home, size);
            break;
        case 2:
            sortByHome(mobile, home, size);
            break;
        case 3:
            printDirectory(mobile, home, size);
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
