#include <iostream>
#include <map>
using namespace std;
/*
 * Author: Anand Patel
 * AM.EN.U4CSE19206
 */ 
int main()
{
	map<char[],int> mymap;
 // map<string,int>::iterator it;
  mymap['January'] = 31;
  mymap['February'] = 28;
  mymap['March'] = 31;
  mymap['April'] = 30;
  mymap['May'] = 31;
  mymap['June'] = 30;
  mymap['July'] = 31;
  mymap['August'] = 31;
  mymap['September'] = 30;
  mymap['October'] = 31;
  mymap['November'] = 30;
  mymap['December'] = 31;
  for (std::map<char[],int>::iterator it=mymap.begin(); it!=mymap.end(); ++it){
  string month;
  cin >> month;
  if(*it==month){
    std::cout << it->first << " => " << it->second << '\n';
}
}
  return 0;
	}
