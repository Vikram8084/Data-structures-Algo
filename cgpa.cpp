#include<bits/stdc++.h>
using namespace std;
 
double CgpaCalc(double marks[], int n)
{
    
    double grade[n];
    double cgpa, sum = 0;
 
    // Computing the grades
    for(int i = 0; i < n; i++)
    {
       grade[i] = (marks[i] / 10);
    }
 
    // Computing the sum of grades
    for(int i = 0; i < n; i++)
    {
       sum += grade[i];
    }
 
    // Computing the CGPA
    cgpa = sum / n;
 
    return cgpa;
}
 
// Driver code
int main()
{
    int n = 5;
    double marks[] = { 90, 80, 70, 80, 90 };
 
    double cgpa = CgpaCalc(marks, n);
         
    cout << "CGPA = ";
    printf("%.1f\n", cgpa);
    cout << "CGPA Percentage = ";
    printf("%.2f", cgpa * 9.5);
}