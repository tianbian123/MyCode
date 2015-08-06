#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
template<class T>
void printValue(const multiset<T> &s1);

int main()
{
    double arry[] = {1,2,10,4,5,110,7,8};

    multiset<double,less<double> > s(arry,arry+8);
    s.insert(110); //重复单元插入,存在2个110
    s.erase(110);


    cout<<*s.upper_bound(6)<<endl;
    printValue(s);
    return 0;
}


template<class T>
void printValue(const multiset<T> &s1)
{
    multiset<double>::const_reverse_iterator itr = s1.rbegin();

    while(itr != s1.rend())
  {
      cout<<*(itr++)<<endl;

  }
    cout << "Complete" << endl;
}
