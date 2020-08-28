#include <iostream>
#include <ios>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;
//std::cout <<
//cout <<
int main(){

    //期中 期末 作业平均
    double midterm, finalscore;
    cout << "请输入期中期末成绩，空格分开" << endl;
    cin >> midterm >> finalscore;//输入

    //家庭作业部分
    cout << "请输入多个（单个）家庭作业的成绩，以，表示结束" << endl;
    double median;//保存中位数

    //vector
    vector<double> homework;
    double x;
    while(cin >> x){
        homework.push_back(x);
    }

    //中位数： 已经从小到大排好序了 中间的那个 / 中间那两个的平均值
    //排序
    sort(homework.begin(),homework.end());//[a,b) 非递减（不是严格的递增）

    vector<double>::size_type vec_sz = homework.size();//homework.size()

    int mid = vec_sz / 2;
    median = (vec_sz % 2 == 0) ?(homework[mid] + homework[mid - 1]) / 2 : homework[mid];

    //输出结果
    //定义有效数字
    streamsize prec = cout.precision();
    cout << "precision():" << prec << endl;
    cout << "最终成绩是：" << setprecision(4) << 0.2 * midterm + 0.4 * finalscore + 0.4 * median <<
    setprecision(prec)<< endl;
    cout << "precision()" << cout.precision() << endl;

    return 0;
}
