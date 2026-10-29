
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
};

const string FILE_NAME = "students.txt";

// Load student records from file
vector<Student> loadStudents() {
    vector<Student> students;
    ifstream file(FILE_NAME);
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string id, age, name, course;

        if (getline(ss, id, '|') &&
            getline(ss, name, '|') &&
            getline(ss, age, '|') &&
            getline(ss, course)) {
            try {
                students.push_back({
                    stoi(id), name, stoi(age), course
                });
            } catch (...) {
                // Skip invalid records
            }
        }
    }

    return students;
}

// Save all student records to file
void saveStudents(const vector<Student>& students) {
    ofstream file(FILE_NAME);

    for (const Student& s : students) {
        file << s.id << "|" << s.name << "|"
             << s.age << "|" << s.course << "\n";
    }
}

// Add a student
void addStudent() {
    vector<Student> students = loadStudents();
    Student s;

    cout << "Enter Student ID: ";
    cin >> s.id;

    for (const Student& st : students) {
        if (st.id == s.id) {
            cout << "Student ID already exists!\n";
            return;
        }
    }

    cout << "Enter Name: ";
    getline(cin >> ws, s.name);

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "Enter Course: ";
    getline(cin >> ws, s.course);

    if (s.name.find('|') != string::npos ||
        s.course.find('|') != string::npos ||
        s.age <= 0 || s.age > 120) {
        cout << "Invalid input. Record not saved.\n";
        return;
    }

    students.push_back(s);
    saveStudents(students);

    cout << "Student added successfully!\n";
}

// Display all students
void displayStudents() {
    vector<Student> students = loadStudents();

    if (students.empty()) {
        cout << "No student records found.\n";
        return;
    }

    cout << "\n--- Student Records ---\n";

    for (const Student& s : students) {
        cout << "ID: " << s.id
             << " | Name: " << s.name
             << " | Age: " << s.age
             << " | Course: " << s.course << "\n";
    }
}

// Update a student
void updateStudent() {
    vector<Student> students = loadStudents();
    int id;
    bool found = false;

    cout << "Enter Student ID to update: ";
    cin >> id;

    for (Student& s : students) {
        if (s.id == id) {
            cout << "Enter new name: ";
            getline(cin >> ws, s.name);

            cout << "Enter new age: ";
            cin >> s.age;

            cout << "Enter new course: ";
            getline(cin >> ws, s.course);

            if (s.name.find('|') != string::npos ||
                s.course.find('|') != string::npos ||
                s.age <= 0 || s.age > 120) {
                cout << "Invalid input. Update cancelled.\n";
                return;
            }

            found = true;
            break;
        }
    }

    if (found) {
        saveStudents(students);
        cout << "Student updated successfully!\n";
    } else {
        cout << "Student not found.\n";
    }
}

// Delete a student
void deleteStudent() {
    vector<Student> students = loadStudents();
    int id;

    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            saveStudents(students);
            cout << "Student deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

// Search for a student
void searchStudent() {
    vector<Student> students = loadStudents();
    int id;

    cout << "Enter Student ID to search: ";
    cin >> id;

    for (const Student& s : students) {
        if (s.id == id) {
            cout << "ID: " << s.id
                 << "\nName: " << s.name
                 << "\nAge: " << s.age
                 << "\nCourse: " << s.course << "\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Update Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Search Student\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: updateStudent(); break;
            case 4: deleteStudent(); break;
            case 5: searchStudent(); break;
            case 0: cout << "Program closed.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
