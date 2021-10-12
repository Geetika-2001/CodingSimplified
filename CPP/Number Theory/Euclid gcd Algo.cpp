#include <iostream>
using namespace std;
int euclid_gcd(int a, int b)
{
//considering the scenario where the second number is larger than the first one
    if (a < b)
    {
        return euclid_gcd(b, a);
    }
    //Mathmeatical interpretation of the euclid's gcd algorithm
    //gcd(a,b)=gcd(b,a%b)
    //Defining base condition of the recursive call to find the gcd

    if (b == 0)
    {
        //hcf of the numbers when one of them is zero is the other number
        return a;
    }
    return euclid_gcd(b, a % b);
}
int main()
{
    int a, b;
    cout << "Enter the first number\n";
    cin >> a;
    cout << "Enter the second number\n";
    cin >> b;
    cout << euclid_gcd(a, b) << endl;
    return 0;
}
