/*
Lec 1
Data Types in C++:
 int
 float
 double
 char
 bool
 string
 simple app cinverter to understand em 
 ensuring the number is float using f suffix
 true can represent 1 
 false can represent 0
 sizeof(to represent the size of memory being taking)
 INT_MIN val is -2147483648
 INT_Max val is 2147483647
 type alias -> giving a name to a data type , usign ID = type;
 or using typedef ID = type; 
*/

#include <iostream>
#include <limits>
using namespace std;
using BIGAT4 = long int;


void CalculateDataSize()
{
    cout << "Enter the number of data size in Megabytes";
    int size;
    while (true)
    {
        cin >> size;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input please enter only integer numbers";
        }
        else
        {
            break;
        }
    }

    int sizeOfDataInKiloBytes = size * 1024;
    int sizeOfDataInBytes = sizeOfDataInKiloBytes * 1204;
    int sizeOfDataInBits = sizeOfDataInBytes * 8;

    cout << "The size of your data is \n" << size << " Megabyte \n"
         << sizeOfDataInKiloBytes << " Kilobyte \n"
         << sizeOfDataInBytes << " Byte \n"
         << sizeOfDataInBits << " Bit \n";
}


int main()
{
    BIGAT4 LOng_Number = 2147483647;
    int IsPassed = true;
    int length = 5;
    char grade = 'C';
    float pi = 3.14f; // inaccurate sometimes
    auto X = 10;     // dynamicly detect the data type {assign a value is a must}
    double e = 2.71;
    bool isEasy = false;
    string username = "Abdo";
    cout<<"<====================useVaraibles==================> \n";
    cout << length << endl;
    cout<<LOng_Number<<endl;
    cout<<IsPassed<<endl;
    cout << grade << endl;
    cout << pi << endl;
    cout << e << endl;
    cout << isEasy << endl;
cout<<"<===================know the memory address===================> \n";
    cout << &X << endl; // know the memory address
    cout << &username << endl; // know the memory address
    cout<<"<====================know the memory being taking from each data type==================> \n";
    cout<<sizeof(char)<<endl;
    cout<<sizeof(string)<<endl;
    cout<<sizeof(char[5])<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(INT_MAX)<<endl;
    cout<<sizeof(INT_MIN)<<endl;
    cout<<"<=================SimpleAPP=====================> \n";
    CalculateDataSize();
    return 0;
}

