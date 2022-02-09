#include <iostream>

using namespace std;
// x==2  1
// x!=5  1
// x!=5 && y>=5 1
// z!=0 ||x==2 1
// !(y<10)1
int main()
{
    // int x = 2, y = 5, z = 0;
    // cout << "x==2  " << (x == 2);
    // cout << "\nx!=5  " << (x != 5);
    // cout << "\nx!=5 && y>=5  " << (x != 5 && y >= 5);
    // cout << "\nz!=0 || x==2  " << (z != 0 || x == 2);
    // cout << "\n!(y<10)  " << !(y < 10);
    char ALPHABET;
    cout << "Enter the alphabet to check if it is Consonent or a Vowel ";
    cin >> ALPHABET;
    if (ALPHABET == 'a' || ALPHABET == 'e' || ALPHABET == 'i' || ALPHABET == 'o' || ALPHABET == 'u' || ALPHABET == 'u' || ALPHABET == 'A' || ALPHABET == 'E' || ALPHABET == 'I' || ALPHABET == 'O' )
    {
        cout << ALPHABET << " ALPHABET is Vowel ";
    }
    else
    {
        cout << ALPHABET << " ALPHABET is Consonant ";
    }

    return 0;
}