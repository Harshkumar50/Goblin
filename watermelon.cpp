#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    if ((n>2) && (n%2==0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    puts("");
    return 0;
}
