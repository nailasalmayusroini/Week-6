#include <iostream>
#include <string>
using namespace std;

struct Data {
    int nim;
    float uts;
    float uas;
    float avg;
};

int main () {
    int i = 0;
    int n = 5; 
    Data student[n];

    string expectedResult[5] = {
        "Student 1",
        "NIM: 537694",
        "Average: 89",

        "Student 2",
        "NIM: 536998",
        "Average: 75",

        "Student 3",
        "NIM: 538903",
        "Average: 87.5",

        "Student 4",
        "NIM: 536266",
        "Average: 93",

        "Student 5",
        "NIM: 535597",
        "Average: 74.5",

    };


    for (i=0; i<n; i++) {
        cout << "\nStudent " << i+1 << ": " << endl;
        cout << "Enter NIM: ";
        cin >> student[i].nim;
        cout << "Enter UTS value: ";
        cin >> student[i].uts;
        cout << "Enter UAS value: ";
        cin >> student[i].uas;

        student[i].avg = (student[i].uts + student[i].uas) / 2;
    }

    cout << "----------" << endl;
    string actualResult[5] = {
        for (i=0; i<n; i++) {
        cout << "\nStudent " << i+1 << endl;
        cout << "NIM: " << student[i].nim << endl;
        cout << "Average: "  << student[i].avg << endl;
        }
    }
    
    bool testPassed = true;
    for (i=0; i<5; i++) {
        if (actualResult[i] != expectedResult[i]) {
            testPassed = false;
            break;
        }
    }

    if (testPassed) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}