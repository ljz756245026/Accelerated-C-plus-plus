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
    cout << endl; // 0 1 2


    //一、加入& 引用， 相当于取了一个别名，无论对引用sc修改还是原始的score修改，值都改变。因为两种都指向同一片内存空间
    vector<int>& sc = score;
    sc.push_back(3);


    //一、加入const & 引用， 这里的const_sc相当于一个只能够读的操作。 原始的改变，const &的也会变。
    //你可以理解成一面镜子，我在镜子上画画，原始图像不会变。但是如果我在原始图像进行画画，镜子里的也变了。
    const vector<int> & const_sc = score;
    //const_sc.push_back(4);//报错，因为定义了const 不能修改
    score.push_back(4);
    for(auto c : const_sc)
        cout << c << " ";
    cout << endl; // 0 1 2 3 4


    //vector<int> & sc1 = const_sc;//报错，必须由const修饰
    const vector<int> & const_sc1 = const_sc;

    const vector<int> & const_sc2 = sc;//ok
    //小结： const类型只能被 const的 引用
    //       非const类型可以被const引用
    //       把const理解成为 只读 修饰符（用户只能读，不能写）



    return 0;
}
