/*
Lec 5
Loops in C++:
for
while
do-while
break
continue
recursive function

Loops are used to repeat a block of code multiple times based on a condition or a set of conditions.

*/

// task 1 -> use foor loop to print numbers from 1 to 10
// task 2 -> use foor loop to print numbers from 10 to 1
// task 3 -> use while loop to print numbers from 1 to 10
// task 4 -> use do-while loop to print numbers from 1 to 10
// task 5 -> use continue and break to print numbers from 1 to 10
// task 6 -> use recursive function to print numbers from 1 to 10
#include <iostream>
using namespace std;

void task1()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
}

void task2()
{
    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }
}

void task3()
{
    int i = 1;
    while (true)
    {
        cout << i << endl;
        i++;
        if (i == 11)
        {
            break;
        }
    }
}

void task4()
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);
}

void task5()
{
    int i = 1;
    while (true)
    {
        cout << i << endl;
        i++;
        if (i == 11)
        {
            break;
            ;
        }
        if (i == 5)
        {
            continue;
        }
    }
}

int main()
{
    task5();
    task1();
    task2();
    task3();
    task4();
    return 0;
}
