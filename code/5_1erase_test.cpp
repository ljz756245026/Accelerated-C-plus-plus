#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vector<int>::iterator iter = vec.begin();

    while(iter != vec.end()){
        iter = vec.erase(iter);//返回被擦除元素的后一个iter
    }
    cout << *iter << endl;//5
    cout << vec.size()<< endl;//0
    cout << "ok" << endl;

    return 0;
}
