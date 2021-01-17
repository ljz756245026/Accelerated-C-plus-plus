#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

vector<string> split(const string& s){
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;

    while(i != s.size()){

        while(i != s.size() && isspace(s[i]))
            ++ i;//忽略前面的所有空格

        //找出下面一个单词的重点
        string_size j = i;//i是起点，j是终点
        while(j != s.size() && !isspace(s[j]))
            ++ j;

        //如果找到了一些非空白字符
        if(i != j){
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }

    return ret;
}

int main()
{
    string s1 = "this is a test";

    vector<string> res = split(s1);

    for(auto word : res)
        cout << word << endl;

    return 0;
}
