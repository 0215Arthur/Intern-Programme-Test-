# Intern Programme Test 


### 华为机试 
***依赖背包问题***


ip地址与掩码判别
--------------
```C++
vector<string> split(string str, char del){
 stringstream ss(str);
 string tok;
 vector<string> ret;
 while(getline(ss, tok, del)){
 ret.push_back(tok);}
 return ret;
 }
 ```
 
 利用stringstream精妙的数据分割，学到了！

循环记录处理
-----------
真大巨坑 
><https://www.nowcoder.com/practice/2baa6aba39214d6ea91a2e03dff3fbeb?tpId=37&tqId=21242&rp=0&ru=/ta/huawei&qru=/ta/huawei/question-ranking>
>输入描述:
>一行或多行字符串。每行包括带路径文件名称，行号，以空格隔开。
>
>输出描述:
>将所有的记录统计并将结果输出，格式：文件名 代码行数 数目，一个空格隔开，如：
>
```
c++
 
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
 
using namespace std;
 
string getFileName(string path){
    int pos = path.rfind('\\');
    return path.substr(pos + 1);
}
 
string modifyName(string name){
    if (name.size() > 16){
        name = name.substr(name.size() - 16);
    }
 
    return name;
}
 
struct ErrRecord{
    string file;
    int lineNo;
    int count;
 
    ErrRecord(string file, int lineNo){
        this->file = file;
        this->lineNo = lineNo;
        count = 1;
    }
 
    bool operator==(const ErrRecord & a){
        return (file == a.file) && (lineNo == a.lineNo);
    }
};
 
int main(){
 
    string file;
    int lineNo;
    vector<ErrRecord> myvec;
    while (cin >> file >> lineNo){
        ErrRecord record(getFileName(file), lineNo);
        auto res = find(myvec.begin(), myvec.end(), record);
        if (res == myvec.end()){
            myvec.push_back(record);
        }
        else{
            res->count++;
        }
    }
 
    int count = 0;
    for (auto item : myvec){
        if (count + 8 >= myvec.size()){
            cout << modifyName(item.file) << " " << item.lineNo << " "
                << item.count << endl;
        }
        count++;       
    }
 
     
    return 0;
}
```
