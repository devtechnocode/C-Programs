#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n ,petya ,vasya ,tonya;
    int counter=0;
    cin >>"enter value of n:">> n;
    for (int i=0 ; i<n; i++)
    {
        cin >> petya >> vasya >> tonya;
        if (petya+vasya+tonya>=2)
        {
            counter+=1;
        }
       
    }
    cout<<counter;
    return 0;     
}
