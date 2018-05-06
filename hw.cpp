#include <iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
/*
第三题
ini文件处理问题
*/
int main()
{

	string test;
	map<string, map<string, string>> V;


	string now = "";
	while (getline(cin, test)) {

		if (test.find(';') != string::npos)
		{
			test = test.substr(0, test.find(';'));
			//cout << test;
		}
		if (test == "")
			continue;
		//找到[section]开始
		if (test.find("section") != string::npos)
		{
			int k =0;
			int b = 0;
			for (int i = 0; i < test.length(); i++)
			{
				if (test[i]!=' '&&test[i]!='[' )
				{
					b = i;
					break;
				}

			}
			for (int i = b; i < test.length(); i++)
			{
				if (test[i] == ' '||test[i]==']')
				{
					k = i;
					break;
				}
					
			}
			now = test.substr(b, k - 1);
			cout << now << endl;
		}
		else
		{
			//进入键值
			if (now == "")
				continue;
			int  key, tmp;
			bool first = false;
			int  value;
			for (int i = 0; i < test.length(); i++)
			{
				if ((test[i] == ' ' || test[i] == '=') && !first)
				{
					key = i;
					first = true;
				}
				if (first&&test[i] != '='&&test[i] != ' ')
				{
					value = i;
					break;
				}
			}
			string _Key = test.substr(0, key);
			
			string ts = test.substr(value, test.length());
			int k = ts.length();
			for (int i = 0; i < ts.length(); i++)
			{
				if (ts[i] == ' ')
				{
					k = i;
					break;
				}

			}
			string _Value = ts.substr(0,k);
			
			V[now][_Key] = _Value;

		}



	}

	for (map < string, map<string, string>>::iterator it = V.begin(); it != V.end(); it++)
	{
		for (map<string, string>::iterator t = (it->second).begin(); t != (it->second).end(); t++)
		{
			cout << "{" << it->first << "}" << "{" << t->first << "}" << "{" << t->second << "}" << endl;

		}
	}

	return 0;


}

/*
第2题 温度与频偏值
*/
//
//#include <iostream>
//#include <vector>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 0, y = 0;
//	cin >> x;
//	if (x < -400)
//	{
//		y = 10 * (-400+ 170) - 1000;
//	}
//	else if (x < -170&&x>=-400) {
//		y = 10*(x+170)-1000;
//	}
//	else if (x>=-170&&x<=0)
//	{
//		y = 10 * (x +170)- 1000;
//	}
//	else if (x >= 0 && x <= 40) {
//		y = 6 * x +700;
//	}
//	else if (x>40&&x<=300)
//	{
//		y = 6 * (x-40) + 940;
//	}
//	else if(x>300&&x<=550){
//		y = 20 * (x - 300) + 2500;
//	}
//	else if (x > 550&&x<=1000)
//	{
//		y = 20 * (x - 300) + 2500;
//	}
//	else
//	{
//		y = 20 * (1000 - 300) + 2500;
//	}
//	cout << y;
//	return 0;
//}

