#include <iostream>
#include <string>

//声明我们所使用的标准库名称
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    //请某人输入其姓名
    std::cout << "Please enter your name:";

    //读姓名
    std::string name;//定义变量name
    std::cin >> name;//把姓名读进name

    //构造我们将要输出的信息
    const std::string greeting = "Hello, " + name + "!";

    //围住问候语的空白个数
    const int pad = 1;

    //待输出的行数和列数
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << "cols" << cols << endl;

    //输出一个空白行，把输入和输出分开
    cout << endl;

    //输出rows行
    //不变式：到目前为止，我们已经输出了r行
    for(int r = 0; r != rows; ++ r){
        string::size_type c = 0;

        //不变式：到目前为止，在当前行中我们已经输出了c个字符
        while(c != cols){
            //应该输出问候语了吗？
            if(r == pad + 1 && c == pad + 1){
                cout << greeting;
                c += greeting.size();
            }else{
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }

        cout << endl;//每行后加一个换行
    }



    return 0;
}
