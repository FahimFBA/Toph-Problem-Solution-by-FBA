#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    cin >> n;
    // apply the formula: 2^(n-1) = The sum of the Nth row of Pascal's triangle.
    sum=pow(2,n-1);
    cout << sum << endl;
}