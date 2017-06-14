
vector<int> maxInWindows(const vector<int>& num, unsigned int size)  
{  
    vector<int> ret;          //保存滑动窗口的最大值  
    if (size == 0 || num.size()<size)    //排除非法输入  
        return ret;  
  
    int max = 0;  
    int length = num.size();  
    for (int i = 0; i<size; ++i)     //寻找第一次滑动窗口的最大值  
    {  
        if (num[i] > max)  
            max = num[i];  
    }  
    ret.push_back(max);  
  
    for (int i = 1; i<length - size + 1; ++i)    //寻找下一个滑动窗口的最大值  
    {  
        if (num[i + size - 1] > max)       
        {  
            ret.push_back(num[i + size - 1]);  
            continue;  
        }  
        else  
        {  
            max = 0;  
            for (int j = i; j<i + size;++j)  
            {  
                if (num[j] > max)  
                    max = num[j];  
            }  
            ret.push_back(max);  
            continue;  
        }  
    }  
    return ret;  
}  
  
  
//如果输入数组{2,3,4,2,6,2,5,1}及滑动窗口的大小3，那么一共  
//存在6个滑动窗口，他们的最大值分别为{4,4,6,6,6,5}；  
int main()  
{  
    vector<int> v;  
    v.push_back(2);  
    v.push_back(3);  
    v.push_back(4);  
    v.push_back(2);  
    v.push_back(6);  
    v.push_back(2);  
    v.push_back(5);  
    v.push_back(1);  
  
  
    vector<int> v1;  
    v1= maxInWindows(v, 3);  
  
    for (size_t i = 0; i < v1.size(); ++i)  
    {  
        cout << v1[i] << " ";  
    }  
    cout << endl;  
  
    system("pause");  
    return 0;  
}  