#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // 0 容器 需要容器存储输入内容
    typedef vector<string>::size_type vec_sz;

    vector<string> words;
    vector<int> counts;

    // 1 输入 输入查找
    cout << "Enter words: ";
    string s;

    // 2 处理 遍历处理是否拥有，有则数量加一，反之push
    while (cin >> s)
    {
        bool found = false;
        for (vec_sz i = 0; i < words.size(); ++i)
        {
            if (s == words[i])
            {
                ++counts[i];
                found = true;
            }
        }

        if (!found)
        {
            words.push_back(s);
            counts.push_back(1);
        }
    }

    // 3 输出 遍历输出内容
    for (vec_sz i = 0; i < words.size(); ++i)
    {
        cout << words[i] << " appeared " << counts[i]
             << " time" << endl;
    }
    return 0;
}
