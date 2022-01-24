#include <iostream>

using namespace std;

int main()
{
    int num;

    int i = 1;
    cout << "Enter the Number you want the Mulitplication Table of ";
    cin >> num;
    cout << "Mulitplication Table of " << num << " is\n";
    // USING FOR LOOP
    cout << "USING FOR LOOP\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << "=" << num * i << endl;
    }

    // USING WHILE LOOP
    cout << "USING WHILE LOOP\n";
    while (i <= 10)
    {

        cout << num << " X " << i << "=" << num * i << endl;
        i++;
    }
    // USING DO WHILE LOOP
    i=1;
    cout << "USING DO WHILE LOOP\n";
    do
    {

        cout << num << " X " << i << "=" << num * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}