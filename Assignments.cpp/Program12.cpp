/*Question: Write a program that takes total number of students in a class and then asks the user to enter
marks for each student in the class and compute the class average. Use a while loop to compute the
average [Hint Average sum of marks of all student's total number of students]. */
#include <iostream> 
using namespace std;
int main() 
{ 
    int totalStudents, count = 0; 
    float marks, average, sum = 0.0; 
    
    cout << "Enter the total number of students: "; 
    cin >> totalStudents;
    
    while (count < totalStudents)
    {
        cout << "Enter marks for student " << (count + 1) << ": ";
        cin >> marks; 
        sum += marks; 
        count++;
    }
    average = sum / totalStudents; 
    cout << "The class average is: " << average << endl;
    return 0;
}