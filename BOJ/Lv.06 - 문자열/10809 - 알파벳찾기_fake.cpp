#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string dec = "abcdefghijklmnopqrstuvwxyz";
    string s;

    cin >> s;
    for(int i = 0;i<dec.length();i++)
    {
        //unsigned 방지
        cout << (int)s.find(dec[i]) << " ";
    }   
    
    return 0;
}