#include <iostream>

using namespace std;

// 从这道题学习到的内容：
// 可以掌握一个式子
// (lefti + 1) mod N == len mod N
// 线性思维思考从右往左分组最后是左边的余下来
// 但是遍历是从左往右开始的，这个式子等价地完成从左到右分组，结果和从右到左是一样的

int main()
{
    int a, b;
    cin >> a >> b;
    string s = to_string(a + b);
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        cout << s[i];
        if (s[i] == '-')
            continue;
        // if (s[0] == '-')
        // {
        //     if (i % 3 == 0 && i != len - 1)
        //         cout << ",";
        // }
        // else
        // {
        //     if ((i + 1) % 3 == 0 && i != len - 1)
        //         cout << ",";
        // }
        // 上面理解错了题意，标准格式是从低位数到高位的，上面这个是从开始高位开始数三个的
        else if ((i + 1) % 3 == len % 3 && i != len - 1) // 这里的(i+1)%3 == len%3 让人不是很好理解
            cout << ",";
    }
    return 0;
}