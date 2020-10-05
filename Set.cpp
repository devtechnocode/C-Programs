#include <iostream>
#include <set>
using namespace std;
/*
 * Author: Anand Patel
 * AM.EN.U4CSE19206
 */ 
int main()
{
	int myPassenger[]= {1,30,25,60,75,41};
	std::multiset<int,int> myMultiset;
	for(int i = 0; i < 6; i++)
{
   if(myPassenger[i] >= 0 && myPassenger[i] <=9)
      myMultiset[myPassenger[i]] = myMultiset[myPassenger[i]] + 1;
}

return 0;
}
