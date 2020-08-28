#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;
//std::cout <<
//cout <<
int main(){

    //期中 期末 作业平均
    double midterm, finalscore;
    cout << "q请输入期中期末成绩，空格分开" << endl;
    cin >> midterm >> finalscore;//输入

    //家庭作业部分
    cout << "请输入多个（单个）家庭作业的成绩，以，表示结束" << endl;
    double homescore = 0;
    int count = 0;//homescore / count

    double x;//单个家庭作业
    while(cin >> x){
        count ++;
        homescore += x;
    }

    //输出结果
    //定义有效数字
    streamsize prec = cout.precision();
    cout << "precision():" << prec << endl;
    cout << "最终成绩是：" << setprecision(4) << 0.2 * midterm + 0.4 * finalscore + 0.4 * (homescore / count) <<
    setprecision(prec)<< endl;
    cout << "precision()" << cout.precision() << endl;

    return 0;
}
