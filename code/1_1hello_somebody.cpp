#include <iostream>
#include <string>

int main(){
    //请某人输入其姓名
    std::cout << "Please enter your name:";

    //读姓名
    std::string name;//定义变量name
    std::cin >> name;//把姓名读进name

    //输出对这个人说的话
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
