# Intern Programme Test 


### 华为机试 
***依赖背包问题***

***ip地址与掩码判别***
vector<string> split(string str, char del){
 stringstream ss(str);
 string tok;
 vector<string> ret;
 while(getline(ss, tok, del)){
 ret.push_back(tok);}
 return ret;
 }
 利用stringstream精妙的数据分割，学到了！

'''c++
 
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
'''
