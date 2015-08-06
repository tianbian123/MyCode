#include <map>

#include <string>

#include <iostream>

using namespace std;

int main()

{
        typedef map<int,string> M;

       map<int, string> mapStudent;

       map<string,unsigned int> mapclass;

       mapclass["abc"] = 1;

       mapStudent[1] =  "student_one";

       mapStudent[2] =  "student_one";

       mapStudent[3] =  "student_one";

       mapStudent.insert(pair<int,string>(4,"student_one"));

       mapStudent.insert(map<int ,string>::value_type(5,"student_one"));

       mapStudent.insert(M::value_type(6,"student_one"));

       mapStudent.erase(2);

       mapStudent.find(3);

       map<int, string>::iterator  iter;

       for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)

{

       cout<<iter->first<<"  "<<iter->second<<endl;

}

}
