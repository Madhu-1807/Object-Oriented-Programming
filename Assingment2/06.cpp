/*
Write a program where two different class objects share data using a friend
function. For example, a class Student and a class Sports share marks and
scores. Explain why the friend function was needed instead of a member function.
*/

#include<iostream>
#include<string>

using namespace std;

// Forward Declaration
class Sports;

class Student {
private:
    int academicMarks;

public:
    Student(int marks) {
        academicMarks = marks;
    }

    friend void displayTotalScore(Student s, Sports sp);
};


class Sports {
private:
    int sportsScore;

public:
    Sports(int score) {
        sportsScore = score;
    }

    friend void displayTotalScore(Student s, Sports sp);
};


void displayTotalScore(Student s, Sports sp) {
    cout << "--- Inside the Friend Function ---" << endl;

    int studentMarks = s.academicMarks;
    int sportsPoints = sp.sportsScore;

    int total = studentMarks + sportsPoints;

    cout << "Student's Academic Marks: " << studentMarks << endl;
    cout << "Player's Sports Score: " << sportsPoints << endl;
    cout << "Total Combined Score: " << total << endl;
}

int main() {
    
    Student studentObj(88);
    Sports sportsObj(95);

    displayTotalScore(studentObj, sportsObj);
    return 0;
}