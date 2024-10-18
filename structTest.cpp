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
    int n = 5; 
    Data student[n];

    // Expected results
    string expectedResult[15] = {
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

    // Input student data
    for (int i=0; i<n; i++) {
        cout << "\nStudent " << i+1 << ": " << endl;
        cout << "Enter NIM: ";
        cin >> student[i].nim;
        cout << "Enter UTS value: ";
        cin >> student[i].uts;
        cout << "Enter UAS value: ";
        cin >> student[i].uas;

        student[i].avg = (student[i].uts + student[i].uas) / 2;
    }

    // Actual results
    cout << "----------" << endl;
    string actualResult[15];
    int index = 0;
    for (int i=0; i<n; i++) {
        actualResult[index++] = "Student " + to_string(i+1);
        actualResult[index++] = "NIM: " + to_string(student[i].nim);
        
        // Manually format average to 1 decimal place
        int whole = static_cast<int>(student[i].avg); // get the whole number
        int decimal = static_cast<int>((student[i].avg - whole) * 10); // get the first decimal
        if (decimal == 0) {
            actualResult[index++] = "Average: " + to_string(whole);
        }
        else {
            actualResult[index++] = "Average: " + to_string(whole) + "." + to_string(decimal);
        }
        
    }
    
    // test if actual result matches the expected result
    bool testPassed = true;
    for (int i=0; i<15; i++) {
        if (actualResult[i] != expectedResult[i]) {
            testPassed = false;
            cout << "Expected: " << expectedResult[i];
            cout << ", but got " << actualResult[i];
            break;
        }
    }

    // Output
    if (testPassed) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}