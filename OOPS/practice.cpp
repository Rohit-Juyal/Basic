// Class for student grade

#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    int phyMarks;
    int mathMarks;
    int chemMarks;

public:
    Student(int r, string n, int p, int m, int c)
    {
        roll_no = r;
        name = n;
        phyMarks = p;    
        mathMarks = m;    
        chemMarks = c;    
    }

    int total()
    {
        return phyMarks + mathMarks + chemMarks;
    }

    char grade()
    {
        float average = total()/3.0;
        if(average >= 90)
        return 'A';
        else if(average >=60 && average < 90)
        return 'B';
        else
        return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int p,m,c;
    cout << "Enter Roll number of a student: ";
    cin >> roll;
    cout << "Enter name of a Student: ";
    cin >> name;
    cout << "Enter marks in 3 subjects: ";
    cin >> p >> m >> c;
    Student s(roll, name, p, m, c);
    cout << "Total Marks: " << s.total() << endl;
    cout << "Grade of Student: " << s.grade();
}
