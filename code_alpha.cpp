#include <iostream>
#include <string>
using namespace std;

int main() {
	cout<<"-----------------"<<endl;
	cout<<"CODE ALPHA TASK 1"<<endl;
	cout<<"-----------------"<<endl;
    int numSemesters;
    cout << "Enter the number of semesters: ";
    cin >> numSemesters;

    float totalGradePoints = 0, totalCredits = 0;

    for (int s = 0; s < numSemesters; ++s) {
        int numSubjects;
        cout << "Enter the number of subjects for semester " << s + 1 << ": ";
        cin >> numSubjects;

        float semesterGradePoints = 0, semesterCredits = 0;

        for (int i = 0; i < numSubjects; ++i) {
            float grade, credit;
            string subjectName;
            cout << "Enter name of subject " << i + 1 << ": ";
            cin >> subjectName;
            cout << "Enter grade (on a scale of 4.0) for subject " << i + 1 << ": ";
            cin >> grade;
            cout << "Enter credit hours for subject " << i + 1 << ": ";
            cin >> credit;
            

            semesterGradePoints += grade * credit;
            semesterCredits += credit;
        }

        totalGradePoints += semesterGradePoints;
        totalCredits += semesterCredits;

        float semesterCGPA = semesterGradePoints / semesterCredits;
        cout << "CGPA for semester " << s + 1 << " is: " << semesterCGPA << endl;
    }

    float overallCGPA = totalGradePoints / totalCredits;
    cout << "Your overall CGPA is: " << overallCGPA << endl;

    return 0;
}

