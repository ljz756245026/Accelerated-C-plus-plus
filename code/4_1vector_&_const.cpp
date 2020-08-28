#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> score;//0 1 2
    score.push_back(0);
    score.push_back(1);
    score.push_back(2);

    for(auto c : score)
        cout << c << " ";
    cout << endl;

    vector<int>& sc = score;
    sc.push_back(3);

    const vector<int> & const_sc = score;
    //const_sc.push_back(4);//报错，因为定义了const 不能修改
    score.push_back(4);

    //vector<int> & sc1 = const_sc;//报错，必须由const修饰
    const vector<int> & const_sc1 = const_sc;

    const vector<int> & const_sc2 = sc;//ok
    //小结： const类型只能被 const的 引用
    //       非const类型可以被const引用
    //       把const理解成为 只读 修饰符（用户只能读，不能写）



    return 0;
}
