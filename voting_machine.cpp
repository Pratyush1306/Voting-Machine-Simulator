#include <iostream>
#include <map>
#include <string>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "Welcome to Voting Machine Simulator\n";
    cout << "1. Vote for Candidate A\n";
    cout << "2. Vote for Candidate B\n";
    cout << "3. Vote for Candidate C\n";
    cout << "4. NOTA\n";
    cout << "5. View Results\n";
    cout << "6. Exit\n";
}

int main() {
    // Map to store candidate names and their vote counts
    map<string, int> candidates;
    candidates["Candidate A"] = 0;
    candidates["Candidate B"] = 0;
    candidates["Candidate C"] = 0;
    candidates["NOTA"] = 0;

    int choice;

    do {
        displayMenu();   
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                candidates["Candidate A"]++;
                cout << "You voted for Candidate A.\n";
                break;
            case 2:
                candidates["Candidate B"]++;
                cout << "You voted for Candidate B.\n";
                break;
            case 3:
                candidates["Candidate C"]++;
                cout << "You voted for Candidate C.\n";
                break;
            case 4:
                candidates["NOTA"]++;
                cout << "You voted for NOTA.\n";
                break;
            case 5:
                cout << "Current Results:\n";
                for (auto& candidate : candidates) {
                    cout << candidate.first << ": " << candidate.second << " votes\n";
                }
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6.\n";
        }
    } while (choice != 6);

    cout << "Thank you for voting!! \n";

    return 0;
}
