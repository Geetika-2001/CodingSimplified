#include <iostream>
using namespace std;
void makesieve(int n)
{
    bool sieve[n + 1];
    //Initializing the complete array as true
    for (int i = 0; i <= n; i++)
    {
        sieve[i] = true;
    }
    sieve[0] = false;
    sieve[1] = false;
    //Initializing the indexes of the numbers to false as none of them are prime
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                //The multiples of the number selected are set to false
                sieve[j] = false;
            }
        }
    }
    //The indexes which have corresponding values set to true are prime
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sieve[i] == true)
        {
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    int n;
    cout << "Enter the upper value of the range between which the values are to be printed\n";
    cin >> n;
    makesieve(n);
    return 0;
}
