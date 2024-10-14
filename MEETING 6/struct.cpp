#include <iostream>
using namespace std;

struct Data {
    int nim;
    float uts;
    float uas;
    float avg;
};

int main () {
    int i = 0;
    int n; 
    cout << "\nEnter the number of students: ";
    cin >> n;

    Data student[n];

    for (i=0; i<n; i++) {
        cout << "Student " << i+1 << ": " << endl;
        cout << "Enter NIM: ";
        cin >> student[i].nim;
        cout << "Enter UTS value: ";
        cin >> student[i].uts;
        cout << "Enter UAS value: ";
        cin >> student[i].uas;

        student[i].avg = (student[i].uts + student[i].uas) / 2;
    }

    cout << "----------" << endl;
    for (i=0; i<n; i++) {
        cout << "\nStudent " << i+1 << endl;
        cout << "NIM: " << student[i].nim << endl;
        cout << "Average: "  << student[i].avg << endl;
    }
    
    return 0;
}