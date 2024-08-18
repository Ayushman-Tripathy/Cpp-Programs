#include<iostream>
using namespace std;

class Student {
public:
    int role;
    char name[20];
    char sec[5];
    int mark;
    float percentage;
};

void insertRecord() {
    FILE *fptr;
    fptr = fopen("Student_Data_Base.bin", "ab+");
    if (fptr == NULL) {
        cerr << "ERROR: File can't open!" << endl;
        return;
    }
    Student stu;
    cout << "\n***Enter new student details***\n";
    cout << "Enter student roll no.: ";
    cin >> stu.role;
    cout << "Enter student name: ";
    cin.ignore();
    cin.getline(stu.name, 20);
    cout << "Enter student's section: ";
    cin.getline(stu.sec, 5);
    cout << "Enter student mark: ";
    cin >> stu.mark;
    cout << "Enter student percentage: ";
    cin >> stu.percentage;
    fwrite(&stu, sizeof(stu), 1, fptr);
    cout << "Student Data written successfully!" << endl;
    fclose(fptr);
}

void displayRecord() {
    FILE *fptr;
    fptr = fopen("Student_Data_Base.bin", "rb");
    if (fptr == NULL) {
        cerr << "ERROR: File can't open!" << endl;
        return;
    }
    Student stu;
    cout << "\n***Student details are given below***\n\n";
    cout << "Roll no.\tName\t\tSection\tMark\tPercentage\n";
    while (fread(&stu, sizeof(stu), 1, fptr) == 1)
        cout << stu.role << "\t" << stu.name << "\t\t" << stu.sec << "\t" << stu.mark << "\t" << stu.percentage << endl;
    fclose(fptr);
}

void searchRecord() {
    int rolln, flag = 0;
    FILE *fptr;
    fptr = fopen("Student_Data_Base.bin", "rb");
    if (fptr == NULL) {
        cerr << "ERROR: File can't open!" << endl;
        return;
    }
    Student stu;
    cout << "Enter student roll number to whom you want to search: ";
    cin >> rolln;
    while (fread(&stu, sizeof(stu), 1, fptr) != 0 && flag == 0)
        if (stu.role == rolln) {
            cout << "Search operation successful and a record found!\n";
            cout << "Roll no.\tName\t\tSection\tMark\tPercentage\n";
            cout << stu.role << "\t\t" << stu.name << "\t\t" << stu.sec << "\t" << stu.mark << "\t" << stu.percentage << endl;
            flag = 1;
        }
    if (flag == 0)
        cout << "No student record found!\n";
    fclose(fptr);
}

void updateRecord() {
    int roll, flag = 0;
    FILE *fptr;
    fptr = fopen("Student_Data_Base.bin", "rb+");
    if (fptr == NULL) {
        cerr << "ERROR: File can't open!" << endl;
        return;
    }
    Student stu;
    cout << "Enter student roll number to whom you want to update: ";
    cin >> roll;
    while (fread(&stu, sizeof(stu), 1, fptr) > 0 && flag == 0)
        if (stu.role == roll) {
            cout << "Search operation successful and a record found!\n";
            cout << "Roll no.\tName\t\tSection\tMark\tPercentage\n";
            cout << stu.role << "\t\t" << stu.name << "\t\t" << stu.sec << "\t" << stu.mark << "\t" << stu.percentage << endl;
            flag = 1;
        }
    if (flag == 1) {
        cout << "Enter updated details:\n";
        cout << "Enter student roll no.: ";
        cin >> stu.role;
        cout << "Enter student name: ";
        cin.ignore();
        cin.getline(stu.name, 20);
        cout << "Enter student's section: ";
        cin.getline(stu.sec, 5);
        cout << "Enter student mark: ";
        cin >> stu.mark;
        cout << "Enter student percentage: ";
        cin >> stu.percentage;
        fseek(fptr, -((long)sizeof(stu)), SEEK_CUR);
        fwrite(&stu, sizeof(stu), 1, fptr);
        cout << "Record updated successfully!\n";
    }
    fclose(fptr);
}

void deleteRecord() {
    int roll, flag = 0;
    FILE *fptr, *ptr;
    fptr = fopen("Student_Data_Base.bin", "rb");
    ptr = fopen("temp.bin", "ab");
    if (fptr == NULL || ptr == NULL) {
        cerr << "ERROR: File can't open!" << endl;
        return;
    }
    cout << "Enter student roll number to whom you want to delete: ";
    cin >> roll;
    Student stu;
    while (fread(&stu, sizeof(stu), 1, fptr) == 1) {
        if (stu.role == roll) {
            cout << "Search operation successful and a record found!\n";
            cout << "Roll no.\tName\t\tSection\tMark\tPercentage\n";
            cout << stu.role << "\t\t" << stu.name << "\t\t" << stu.sec << "\t" << stu.mark << "\t" << stu.percentage << endl;
            cout << "Record deleted!\n";
            flag = 1;
        } else {
            fwrite(&stu, sizeof(stu), 1, ptr);
        }
    }
    fclose(fptr);
    fclose(ptr);
    if (flag == 0)
        cout << "No record Found!\n";
    remove("Student_Data_Base.bin");
    rename("temp.bin", "Student_Data_Base.bin");
}

int main() {
    char choice;
    cout << "+--------------------------------------------------------+\n";
    cout << "|              Welcome To Student Data Base              |\n";
    cout << "+--------------------------------------------------------+\n";
    do {
        cout << "\n\t\t\t  :MENU:\n";
        cout << "1. Insert student record to database.\n";
        cout << "2. Display student record from database.\n";
        cout << "3. Search student record from database.\n";
        cout << "4. Update a student record within the database.\n";
        cout << "5. Delete a student record from database.\n";
        cout << "6. Exit from database.\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case '1':
                insertRecord();
                break;
            case '2':
                displayRecord();
                break;
            case '3':
                searchRecord();
                break;
            case '4':
                updateRecord();
                break;
            case '5':
                deleteRecord();
                break;
            case '6':
                cout << "Exiting the Program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != '6');
    cout << "\n\t\t\t\t\tThank You _/\\_\n";
    getchar(); // Consume the newline character
    return 0;
}
