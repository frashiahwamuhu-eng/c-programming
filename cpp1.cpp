#include <iostream>

using namespace std;

int main() {
    // Variable declarations
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue = 0;
    int fineRate = 0;
    int totalFine = 0;

    // i. Take inputs from the user
    cout << "Enter Book ID (integer): ";
    cin >> bookID;
    
    cout << "Enter Due Date (integer day): ";
    cin >> dueDate;
    
    cout << "Enter Return Date (integer day): ";
    cin >> returnDate;

    // ii. Calculate the days overdue
    daysOverdue = returnDate - dueDate;

    // iii. Use an if...else statement to determine the fine rate and calculate total fine
    if (daysOverdue <= 0) {
        // Book was returned on time or early
        daysOverdue = 0; 
        fineRate = 0;
        totalFine = 0;
    } 
    else if (daysOverdue <= 7) {
        fineRate = 20;
        totalFine = daysOverdue * fineRate;
    } 
    else if (daysOverdue <= 14) {
        fineRate = 50;
        totalFine = daysOverdue * fineRate;
    } 
    else {
        fineRate = 100;
        totalFine = daysOverdue * fineRate;
    }

    // iv. Display the program output
    cout << "\n-----------------------------------" << endl;
    cout << "         LIBRARY FINE DETAILS      " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Book ID:        " << bookID << endl;
    cout << "Due Date:       " << dueDate << endl;
    cout << "Return Date:    " << returnDate << endl;
    cout << "Days Overdue:   " << daysOverdue << endl;
    cout << "Fine Rate:      Ksh. " << fineRate << " per day" << endl;
    cout << "Total Fine:     Ksh. " << totalFine << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
