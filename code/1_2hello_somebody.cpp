#include <iostream>
#include <string>

int main(){
    //请某人输入其姓名
    std::cout << "Please enter your name:";

    //读姓名
    std::string name;//定义变量name
    std::cin >> name;//把姓名读进name

    //构造我们将要输出的信息
    const std::string greeting = "Hello, " + name + "!";

    //构建输出的第二和第四行
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";

    //构建输出的第一和第五行
    const std::string first(second.size(), '*');

    //输出所有内容
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    return 0;
}
