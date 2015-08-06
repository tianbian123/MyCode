#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
template<class T>
void printValue(const set<T> &s1);

int main()
{
    double arry[] = {1,2,10,4,5,110,7,8};

    set<double,less<double> > s(arry,arry+8);
    s.insert(110); //重复单元插入，不报错，但只存在一个110
    s.erase(110);
    printValue(s);
    cout<<*s.upper_bound(6);
    return 0;
}


template<class T>
void printValue(const set<T> &s1)
{
    set<double>::const_reverse_iterator itr = s1.rbegin();

    while(itr != s1.rend())
  {
      cout<<*(itr++)<<endl;

  }
    cout << "Complete" << endl;
}
