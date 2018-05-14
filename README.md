# Intern Programme Test 

华为2018年5月实习生面试
----------
- 第一轮业务面试
	+ 简历提问 问了简历上的一个项目，介绍其功能，如何实现，遇到的问题
	- 现场出题 如何求字符串中字符连续重复的最大次数，考虑选用什么样的数据结构及算法（栈 入栈、出栈）
- 第二轮综合面试
	+ HR看简历聊天
	+ 询问工作意向，学习情况、实习时间
	+ 反向提问

总结
----
- 面试官没有刻意刁难
- 人力很友善
	 

华为2018年5月实习生机试(c++)
--------------
- 数字去重后反向输出
- 一阶线性插值
- ini文件字符串处理

### 数字去重反向输出
*水题 100分*  
**问题描述：**   
长度不超过10的整数，对其先从左到右读，去除重复的数字，再从右到左输出重排后的结果  
输入：97579230  
输出：32579  


**思路**
- 数据结构
  - 用string存数，提取各位数字容易，而且避免**大数问题**  
  - 用map<char,int> key-value记录每个数字的重复次数 
  
+ 算法/结题
  - 从左到右记录各位数字的重复次数 map  
  + 从右到左扫描原字符串，当前数字对应map[a]>1则不做输出并自减；==1则输出;  
  - 对于最右侧的0 加以判断处理  

+ 结果 若首遍没有AC，检查特殊情况0的处理


### 线性插值
*题意不明的大水题。。。 200分*
**问题描述**  
具体描述忘了，可以理解成给出两个点（二维空间），利用线性插值（利用两个端点求出一条直线），给出x求其对应的y（x待入直线方程   
题中给了五个点，可算出4条直线方程  
给出了x的边界范围  
输入： x  
输出： 线性插值计算出的y    
- 解题 ：分支算法 注意考虑边界
- 结果：稀里糊涂的AC了 出错情况基本发生在x的边界处
```
#include <iostream>
#include <vector>
#include<iostream>
using namespace std;
int main()
{
	int x = 0, y = 0;
	cin >> x;
	if (x < -400)
	{
		y = 10 * (-400+ 170) - 1000;
	}
	else if (x < -170&&x>=-400) {
		y = 10*(x+170)-1000;
	}
	else if (x>=-170&&x<=0)
	{
		y = 10 * (x +170)- 1000;
	}
	else if (x >= 0 && x <= 40) {
		y = 6 * x +700;
	}
	else if (x>40&&x<=300)
	{
		y = 6 * (x-40) + 940;
	}
	else if(x>300&&x<=550){
		y = 20 * (x - 300) + 2500;
	}
	else if (x > 550&&x<=1000)
	{
		y = 20 * (x - 300) + 2500;
	}
	else
	{
		y = 20 * (1000 - 300) + 2500;
	}
	cout << y;
	return 0;
}
```

### ini文件识别处理
*中等模拟题 300分*  
**问题描述（原题描述及其不清晰，想打人！）**  
ini配置文件格式为  
>;test  
>[sectionx]  
>key2=va1
>[sectionx]
>key3=va3
>...  
>;为注释符号，其后至行尾的所有字符均被忽略  
>sectionx为块开始语句，其后包括块中的参数 以key=value的形式组织  
>key=value 等号前后的空格可有可，每块可包括多个key-value
>输出时按section的大小升序输出，对应块内key-value按key值升序输出  
>输出的每行形式为{sectionx}{key}{value}  

- 数据结构
  - map<string,map<string,string>>形式组织  
  - 即section-<key-value>映射方式  
- 输入方式
	- getline(cin,str)  
	- 按行读取，不读入换行符，并且可读入空格  
- 解题
	- 逐行读入，先处理**注释符**，取当前行有效部分，并**去除行尾空格**（重要的出错点！！！）  
	- 设置section，读取key-value,去除**前后空格**  
	- 处理结束后将map遍历输出，结果即为符合要求的输出顺序
- 结果
	- 不处理空格的情况下仅通过30%，处理后通过了82%的用例  
	- 还有其他的空格情况存在及key-value组织情况存在

## 总结
刷了一部分华为机试题，并参加了华为机试后，个人感觉  
- 华为的题目属于中等难度题目，偏基础逻辑思路，弱算法考察  
- 虽然也有dp、回溯等算法题目，但数量不多  
- 比京东、网易、阿里的题目要相对简单  
- 也没有扣概念理解和语言细节理解的选择题目，相对比较友好  
- 掌握基本的STL模板和算法基本能应对  
- 但编程题的描述真的不够清楚...  



华为机试（刷题）
-------
### 依赖背包问题 ###


### ip地址与掩码判别 ###

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
vector + stringstream
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
