#include<iostream> 

using namespace std;

int main()
{

    int year;
    cout << "Enter any year of your choice : ";
    cin >> year;
    if (year % 4 == 0)
        cout << year << " is a Leap year";
    else
        cout << year << " is not a Leap year";
}

