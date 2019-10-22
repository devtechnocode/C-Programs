#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x,y,z,i;
    int a=0,b=0,c=0;
    cin >> n;
    for (i=0;i<n;i++){
	    cin >> x >> y >> z;
	    a=a+x;
	    b=b+y;
	    c=c+z;}
    if (a==0 && b==0 && c==0){
	    cout << "YES" << endl;
	    }
    else
	    {
	    cout << "NO" << endl;
	
    }	
    return 0;
    
}
