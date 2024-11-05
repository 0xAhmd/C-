/*
Lec 3
Conditional Statements in C++:
1. if
2. if-else
3. if-else ladder
4. switch
*/

#include <iostream>
using namespace std;

void checkingTheBiggestNum()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c; // Read the numbers directly

    if (a > b && a > c)
    {
        cout << a << " is the biggest number" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is the biggest number" << endl;
    }
    else if (c > a && c > b)
    {
        cout << c << " is the biggest number" << endl;
    }
    else
    {
        cout << "There is no single biggest number." << endl;
    }
}

void knowTheUser()
{
    string user = "Admin";
    string superUser = "SuperAdmin";

    if (user == "SuperAdmin")
    {
        cout << "This user have all the Previliges" << endl;
    }
    else if (user == "Admin")
    {
        cout << "This user is an Admin but from a pile of trash !" << endl;
    }
    else
    {
        cout << "this user is fucked up!" << endl;
    }

    // now lets use ternry operator
    string finalUser = (user == "SuperAdmin") ? "SuperAdmin" : "Admin";
    cout << "The user is " << finalUser << endl;
}

void Ranking()
{
    int rank = 1;

    switch (rank)
    {
    case 1:
    case 2:
    case 3:
        cout << "you are in top 3" << endl;
        break;
    case 4:
    case 5:
    case 6:
        cout << "you are in top 6" << endl;
        break;

    default:
        cout << "you are a dead ass" << endl;
        break;
    }
}

void switchStatement()
{
    int age = 80;
    switch (age)
    {
    case 10:
        cout << "i am 10 years old" << endl;
        break;
    case 20:
        cout << "i am 20 years old" << endl;
        break;
    case 30:
        cout << "i am 30 years old" << endl;
        break;
    case 40:
        cout << "i am 40 years old" << endl;
        break;
    default:
        cout << "i am not 10,20,30,40 years old, I am a Dead Ass" << endl;
        break;
    }
}

int main()
{
    checkingTheBiggestNum();
    knowTheUser();
    switchStatement();

    return 0;
}
