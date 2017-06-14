
vector<int> maxInWindows(const vector<int>& num, unsigned int size)  
{  
    vector<int> ret;          //���滬�����ڵ����ֵ  
    if (size == 0 || num.size()<size)    //�ų��Ƿ�����  
        return ret;  
  
    int max = 0;  
    int length = num.size();  
    for (int i = 0; i<size; ++i)     //Ѱ�ҵ�һ�λ������ڵ����ֵ  
    {  
        if (num[i] > max)  
            max = num[i];  
    }  
    ret.push_back(max);  
  
    for (int i = 1; i<length - size + 1; ++i)    //Ѱ����һ���������ڵ����ֵ  
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
  
  
//�����������{2,3,4,2,6,2,5,1}���������ڵĴ�С3����ôһ��  
//����6���������ڣ����ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}��  
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