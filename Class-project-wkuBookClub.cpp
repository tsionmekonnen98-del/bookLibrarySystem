Beki, [12/29/2025 2:01 AM]
#include <iostream>
#include <string>
using namespace std;

// ================== BOOK CLASS ==================
class Book {
public:
    string title;
    string author;
    string category;
    bool isBorrowed;
    int borrowCount;
};

// ================== LIBRARY CLASS ==================
class LibrarySystem {
private:
    Book library[100];
    int totalBooks;
    int tries;

public:
    // Constructor
    LibrarySystem() {
        totalBooks = 0;
        tries = 0;
        preloadBooks();
    }

    // ================== PRELOAD BOOKS ==================
    void preloadBooks() {
        totalBooks = 50;

           library[0]  = {"Basic Mathematics", "James Stewart", "Natural", false, 0};
library[1]  = {"Calculus I", "Thomas Finney", "Natural", false, 0};
library[2]  = {"General Physics", "Raymond Serway", "Natural", false, 0};
library[3]  = {"College Chemistry", "Raymond Chang", "Natural", false, 0};
library[4]  = {"Linear Algebra", "Gilbert Strang", "Natural", false, 0};
library[5]  = {"Probability Basics", "Sheldon Ross", "Natural", false, 0};
library[6]  = {"Discrete Mathematics", "Kenneth Rosen", "Natural", false, 0};
library[7]  = {"Applied Mathematics", "Erwin Kreyszig", "Natural", false, 0};
library[8]  = {"Environmental Science", "Daniel Chiras", "Natural", false, 0};
library[9]  = {"Intro to Statistics", "Mario Triola", "Natural", false, 0};

// ---------- SOCIAL SCIENCE ----------
library[10] = {"Introduction to Sociology", "Anthony Giddens", "Social", false, 0};
library[11] = {"Basic Economics", "Paul Samuelson", "Social", false, 0};
library[12] = {"Microeconomics", "N. Gregory Mankiw", "Social", false, 0};
library[13] = {"Macroeconomics", "Olivier Blanchard", "Social", false, 0};
library[14] = {"Introduction to Psychology", "David Myers", "Social", false, 0};
library[15] = {"Political Science Basics", "Andrew Heywood", "Social", false, 0};
library[16] = {"Social Anthropology", "Thomas Hylland Eriksen", "Social", false, 0};
library[17] = {"World History", "Howard Spodek", "Social", false, 0};
library[18] = {"Civic Education", "Patrick Hayden", "Social", false, 0};
library[19] = {"Ethics and Society", "James Rachels", "Social", false, 0};

// ---------- PRE ENGINEERING ----------
library[20] = {"Engineering Drawing", "David Goetsch", "Pre Engineering", false, 0};
library[21] = {"Basic Electrical Engineering", "B.L. Theraja", "Pre Engineering", false, 0};
library[22] = {"Mechanical Engineering Basics", "Raghuwanshi", "Pre Engineering", false, 0};
library[23] = {"Civil Engineering Materials", "M.S. Shetty", "Pre Engineering", false, 0};
library[24] = {"Engineering Mathematics I", "K.A. Stroud", "Pre Engineering", false, 0};
library[25] = {"Engineering Physics", "H.K. Malik", "Pre Engineering", false, 0};
library[26] = {"Engineering Chemistry", "Jain & Jain", "Pre Engineering", false, 0};
library[27] = {"Workshop Technology", "Hajra Choudhary", "Pre Engineering", false, 0};
library[28] = {"Basic Electronics", "Albert Malvino", "Pre Engineering", false, 0};
library[29] = {"Applied Mechanics", "Bansal", "Pre Engineering", false, 0};
library[30] = {"Introduction to Programming", "Bjarne Stroustrup", "Software Engineering", false, 0};
library[31] = {"Programming in C++", "E. Balagurusamy", "Software Engineering", false, 0};
library[32] = {"Problem Solving with C", "Byron Gottfried", "Software Engineering", false, 0};
library[33] = {"Data Structures", "Mark Allen Weiss", "Software Engineering", false, 0};
library[34] = {"Computer Fundamentals", "P.K. Sinha", "Software Engineering", false, 0};
library[35] = {"Discrete Structures", "Bernard Kolman", "Software Engineering", false, 0};
library[36] = {"Software Engineering Basics", "Ian Sommerville", "Software Engineering", false, 0};
library[37] = {"Algorithms", "Robert Sedgewick", "Software Engineering", false, 0};
library[38] = {"Computer Organization", "William Stallings", "Software Engineering", false, 0};
library[39] = {"Operating Systems", "Abraham Silberschatz", "Software Engineering", false, 0};

Beki, [12/29/2025 2:01 AM]
// ---------- MIXED FRESHMAN SUPPORT ----------
library[40] = {"Logic for Computer Science", "Jean Gallier", "Software Engineering", false, 0};
library[41] = {"Numerical Methods", "S.S. Sastry", "Natural", false, 0};
library[42] = {"Scientific Writing", "Robert Day", "Social", false, 0};
library[43] = {"Introduction to ICT", "Lawrence Williams", "Software Engineering", false, 0};
library[44] = {"Engineering Ethics", "Charles Harris", "Social", false, 0};
library[45] = {"Fundamentals of Computing", "Peter Norton", "Software Engineering", false, 0};
library[46] = {"Basic Geometry", "Euclid", "Natural", false, 0};
library[47] = {"Linear Programming", "V.K. Kapoor", "Natural", false, 0};
library[48] = {"Communication Skills", "Meenakshi Raman", "Social", false, 0};
library[49] = {"Introduction to AI", "Stuart Russell", "Software Engineering", false, 0};

    }

    // ================== MAIN MENU ==================
    void menu() {
        cout << "welcome to wku Book club\n";
        cout << "1. Login\n";
        cout << "2. Exit\n";
    }

    void menuSelection(int choice) {
        switch (choice) {
        case 1: login(); break;
        case 2: cout << "Exiting...\n"; exit(0);
        default: cout << "Invalid choice\n";
        }
    }

    // ================== LOGIN ==================
   void login() {
    string username, password;
    tries = 0;  

    while (tries < 2) {
        cout << "\n===== WKU BOOK CLUB LOGIN =====\n";
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == "admin" && password == "admin123") {
            cout << "Admin login successful\n";
            adminMenu();
            return;   
        }
        else if (username == "user" && password == "user123") {
            cout << "User login successful\n";
            userMenu();
            return;   
        }
        else {
            tries++;
            cout << "Incorrect username or password!\n";
            cout << "Attempts left: " << (2 - tries) << endl;
        }
    }

    cout<<"\n********************************************\n";
    cout << "TOO MANY ATTEMPTS! ACCESS DENIED.\n";
    cout<<"***********************************************\n";
    exit(0);
}
void adminMenu() {
    int choice;
    do {
        cout << "\n--- ADMIN MENU ---\n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Display All Books\n";
        cout << "4. Calculate Total Books\n";
        cout << "5. Find Popular Book\n";
        cout << "0. Logout\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;
            case 3: displayBooks(); break;
            case 4: calculateTotalBooks(); break;
            case 5: findPopularBook(); break;
            case 6: login(); break;
            case 0: cout << "Logging out...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}

    // ================== USER MENU ==================
    void userMenu() {
        int choice;
        do {
            cout << "\n--- USER MENU ---\n";
            cout << "1. Search\n2. Availability\n3. Borrow\n4. Return\n5. Display\n6. Category\n0. Logout\n";
            cin >> choice;

            switch (choice) {
            case 1: searchBook(); break;
            case 2: checkAvailability(); break;
            case 3: borrowBook(); break;
            case 4: returnBook(); break;
            case 5: displayBooks(); break;
            case 6: checkCategory(); break;
            }
        } while (choice != 0);
    }

Beki, [12/29/2025 2:01 AM]
// ================== BOOK FUNCTIONS ==================
    void addBook() {
        cin.ignore();
        cout << "Title: ";
        getline(cin, library[totalBooks].title);
        cout << "Author: ";
        getline(cin, library[totalBooks].author);
           do {
        cout << "Category (Natural / Social / Informatics / Law / Health / "
                "Other Natural Science / Other Social / Pre Engineering / FBE): ";
        getline(cin, library[totalBooks].category);
if (library[totalBooks].category != "Natural" &&
            library[totalBooks].category != "Social" &&
            library[totalBooks].category != "Informatics" &&
            library[totalBooks].category != "Law" &&
            library[totalBooks].category != "Health" &&
            library[totalBooks].category != "Other Natural Science" &&
            library[totalBooks].category != "Other Social" &&
            library[totalBooks].category != "Pre Engineering" &&
            library[totalBooks].category != "FBE") {

            cout<<"invalid category! please try again"<<endl;
        }


} while (library[totalBooks].category != "Natural" &&
             library[totalBooks].category != "Social" &&
             library[totalBooks].category != "Informatics" &&
             library[totalBooks].category != "Law" &&
             library[totalBooks].category != "Health" &&
             library[totalBooks].category != "Other Natural Science" &&
             library[totalBooks].category != "Other Social" &&
             library[totalBooks].category != "Pre Engineering" &&
             library[totalBooks].category != "FBE");

    library[totalBooks].isBorrowed = false;
    library[totalBooks].borrowCount = 0;
    totalBooks++;

    cout << "Book added successfully.\n";

}

    void removeBook() {
        cin.ignore();
        string title;
        cout << "Enter title to remove: ";
        getline(cin, title);

        for (int i = 0; i < totalBooks; i++) {
            if (library[i].title == title) {
                library[i] = library[totalBooks - 1];
                totalBooks--;
                cout << "Book removed successfully.\n";
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void displayBooks() {
        for (int i = 0; i < totalBooks; i++) {
            cout << "Title:  "<<library[i].title<<" | "<<"Author:  "<<library[i].author<<" | "<<"Category:  "<<library[i].category <<" === "
                 << (library[i].isBorrowed ? "Borrowed" : "Available") << endl;
        }
    }

    void searchBook() {
        cin.ignore();
        string key;
        cout << "Enter title or author: ";
        getline(cin, key);

        for (int i = 0; i < totalBooks; i++) {
            if (library[i].title == key || library[i].author == key) {
                cout << "Found: " << library[i].title << endl;
                return;
            }
        }
        cout << "Not found.\n";
    }

    void checkAvailability() {
        cin.ignore();
        string title;
        cout << "Enter title: ";
        getline(cin, title);

        for (int i = 0; i < totalBooks; i++) {
            if (library[i].title == title) {
                cout << (library[i].isBorrowed ? "Borrowed\n" : "Available\n");
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void borrowBook() {
        cin.ignore();
        string title;
        cout << "Enter title: ";
        getline(cin, title);

        for (int i = 0; i < totalBooks; i++) {
            if (library[i].title == title && !library[i].isBorrowed) {
                library[i].isBorrowed = true;
                library[i].borrowCount++;
                cout << "Book borrowed.\n";
                return;
            }
        }
        cout << "Not available.\n";
    }

    void returnBook() {
        cin.ignore();
        string title;
        cout << "Enter title: ";
        getline(cin, title);

Beki, [12/29/2025 2:01 AM]
for (int i = 0; i < totalBooks; i++) {
            if (library[i].title == title && library[i].isBorrowed) {
                library[i].isBorrowed = false;
                cout << "Book returned.\n";
                return;
            }
        }
        cout << "Invalid operation.\n";
    }

    void calculateTotalBooks() {
        cout << "Total books: " << totalBooks << endl;
    }

    void findPopularBook() {
        int max = 0;
        string popular = "None";


for (int i = 0; i < totalBooks; i++) {
            if (library[i].borrowCount > max) {
                max = library[i].borrowCount;
                popular = library[i].title;
            }
        }
        cout << "Most popular book: " << popular << endl;
    }

  void checkCategory() {
    cin.ignore();
    string cat;
    cout << "Enter category: ";
    getline(cin, cat);

    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (library[i].category == cat) {
            cout << "- " << library[i].title << " (" << library[i].author << ")" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "This category was not found here. Please try again.\n";
    }
  }
};

// ================== MAIN ==================
int main() {
    LibrarySystem system;
    int choice;
    int count = 0; 

    do {
        system.menu();
        cout << "Enter your choice: ";

        
        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear(); 
            cin.ignore(100, '\n'); 
            count++;
        }
        else if (choice != 1 && choice != 2) {
            cout << "Incorrect choice. Please try again.\n";
            count++;
        }
        else {
            system.menuSelection(choice);
            
        }

    
        if (count >= 3) {
            cout << "\n***********************************" << endl;
            cout << "TOO MANY ATTEMPTS! ACCESS DENIED. " << endl;
            cout << "***********************************" << endl;
            return 0; 
        }

    } while (choice != 2);

    return 0;
}