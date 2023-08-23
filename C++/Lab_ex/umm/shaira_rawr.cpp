#include <iostream>
using namespace std;

int main()
{
char course_prog;
int year_lvl;
cout << "Enter course program between d for Data Science, c for Computer Science, and i for Information Technology: ";
cin >> course_prog;
cout << "Enter year level from numbers between 1-4: ";
cin >> year_lvl;

switch (course_prog){
    case 'd':
    cout << "Course Program: Data Science " << endl;
    break;
    case 'c':
    cout << "Course Program: Computer Science " << endl;
    break;
    case 'i':
    cout << "Course Program: Information Technology " << endl;
    break;
    default:
    cout << "None" << endl;
}

switch (year_lvl){
    case 1:
    cout << "Year level: Freshman " << endl;
    break;
    case 2:
    cout << "Year level: Sophomore " << endl;
    break;
    case 3:
    cout << "Year level: Junior " << endl;
    break;
    case 4:
    cout << "Year level: Senior " << endl;
    break;
    default:
    cout << "None" << endl;
    }
        
        return 0;  
        
}
