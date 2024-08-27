#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;

    Student(string studentName = "") {
        name = studentName;
    }

    void display() const {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student students[5] = {
        Student("Arshad"),
        Student("Alex"),
        Student("Amar"),
        Student("Dana"),
        Student("Joji")
    };

    for (int i = 0; i < 5; ++i) {
        students[i].display();
    }

    return 0;
}
