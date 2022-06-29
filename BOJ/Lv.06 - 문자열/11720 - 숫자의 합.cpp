#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int num,N,sum=0;

    cin >> N;

    for(int i = 1;i<=N;i++)
    {
        cin >> num;
        sum += num;
    }

    cout << sum;

    return 0;

}