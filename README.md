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
