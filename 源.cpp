//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> V;
//bool check(int i,int j,int len)
//{
//	if (i + 1 == j)
//		return true;
//	int left = i;
//	int right = j;
//	int flag = 0;
//	while (left != right)
//	{
//		++left;
//		if (V[left] > V[right])
//		{
//			flag = 1;
//			break;
//		}
//	}
//	left = i;
//	while (left != right)
//	{
//		--right;
//		if (V[left] < V[right])
//		{
//			flag = 1;
//			break;
//		}
//	}
//	 left = i;
//	 right = j;
//	 if (!flag)
//		 return true;
//	 while (left != right)
//	 {
//		 left = (left - 1 + len) % len;
//		 if (V[left] > V[right])
//			 return false;
//	 }
//	 left = i;
//	 while (right != left)
//	 {
//		 right = (right + 1) % len;
//		 if (V[left] < V[right])
//			 return false;
//	 }
//	 return true;
//}
//
//int main()
//{
//	
//	int n,t;
//	int r = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t;
//		V.push_back(t);
//	}
//	int len = V.size();
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = i + 1; j < len; j++)
//		{
//
//			if (check(i, j, len))
//				r++;
//
//		}
//	}
//	cout << r;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int change(int num, char **str)
//{
//	const int N = 101;
//	int start[26];
//	int end[26];
//	for (int i = 0; i < 26; i++)
//	{
//		start[i] = 0;
//		end[i] = 0;
//	}
//	int flag = 1;
//	char tmp;
//	int equal = 0;
//	int i;
//	for ( i = 0; i < num; i++)
//	{
//		int len = strlen(str[i]);
//		int e = str[i][0] - 'a';
//		int s = str[i][len - 1]-'a';
//		if (e == s)
//		{
//			start[e]++;
//			continue;
//		}
//		start[e]++;
//		end[s]++;
//	}
//	int sum = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		if (start[i] >= end[i])
//			sum += end[i];
//		else
//			sum += start[i];
//	}
//	sum += equal;
//	if (sum != num - 1)
//		flag = 0;
//
//	return flag;
//
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//const int N = 11;
//int result[N];
//int drink(int c)
//{
//	int sum = 0;
//	
//	while (1) {
//		int tmp = 0;
//		tmp = c / 3;
//		c = c % 3 + tmp;
//		sum += tmp;
//		if (tmp == 0 && c == 2) {
//			sum++;
//			break;
//		}
//		else if (tmp == 0 && c == 1)
//			break;
//
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int s;
//	 
//	int n = 0;
//	while (1)
//	{
//		cin >> s;
//		if (s == 0)
//			break;
//		result[n] = drink(s);
//		n++;
//	}
//	for (int i = 0; i < n; i++)
//		cout << result[i] << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//const int N = 1001;
//int st[N];
//int main()
//{
//	int n,a;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		st[a] = 1;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (st[i])
//			cout << i << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<int>R;
//	cin >> n;
//	int f = 0;
//	while (n)
//	{
//		for (vector<int>::iterator it = R.begin(); it != R.end();it++)
//			if (*it == n % 10)
//			{
//				
//				f = 1;
//				break;
//			}
//		if(!f)
//		   R.push_back(n%10);
//		f = 0;
//		n = n / 10;
//	}
//	for (vector<int>::iterator it = R.begin(); it != R.end(); it++)
//	{
//		cout << *it;
//	}
//	return 0;
//}
/*zifuchuan*/
//#include<iostream>
//#include <string.h>
//#include <stdio.h>
//#include<set>
//using namespace std;
//set<char> tmp;
//
//int main() {
//
//
//	int r = 0;
//
//	char str;
//	while (1)
//	{
//		str = getchar();
//		if (str == '\n')
//			break;
//		if (str <= 127 && str >= 0)
//		{
//			tmp.insert(str);
//		}
//
//	}
//
//	cout << tmp.size();
//	return 0;
//}
//#include <sstream>
//#include <string>
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//
//{
//	
//	string str,tmp="";
//	while (getline(cin, str))
//	{
//		tmp += str;
//	}
//	stringstream S(tmp) ;
//
//	string c,r="";
//	while (S>>c)
//	{
//		r = c+ " " +r;
//	}
//	cout << r;
//	return 0;
//}
//#include <iostream>
//#include<map>
//#include <string>
//using namespace std;
//int main()
//{
//	map<string, int> M;
//	int n;
//	string s;
//	cin >> n;
//	for (int i = 0; i<n; i++)
//	{
//		cin >> s;
//		if (M[s]>0)
//			M[s]++;
//		else
//			M[s] = 1;
//
//	}
//	for (map<string, int>::iterator it = M.begin(); it != M.end(); it++)
//	{
//		int i = it->second;
//		while (i)
//		{
//			cout << it->first << endl;
//			i--;
//		}
//	}
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int s = 0;
//	while (n) {
//		s += n % 2;
//		n /= 2;
//	}
//	cout << s;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	return b;
//}
//int main()
//{
//	int dp[61][3201];//dp[i][j]用j钱 买i个物品 最大的dp
//	int vp[61];//
//	int v[61];//物品的价值
//	int q[61];//q 每个物品的属性
//	bool flag[61][3201];
//	int n, m;
//	int  p;
//	cin >> n >> m;
//	memset(dp, 0, 61 * 3201 * sizeof(int));
//	memset(vp, 0, 61 * sizeof(int));
//	memset(flag, false, 61 * 3201 * sizeof(bool));
//	for (int i = 0; i < m; i++)
//	{
//		cin >> v[i] >> p >> q[i];
//		vp[i] = v[i]*p;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n / 10+1; j++)
//		{
//			if (q[i] == 0)
//			{
//				if (j < v[i] / 10)
//				{
//					dp[i][j] = dp[i - 1][j];
//				}
//				else
//				{
//					flag[i][j] = true;
//					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i] / 10] + vp[i]);
//				}
//			}
//			else
//			{
//				if (j < v[i] / 10)
//				{
//					dp[i][j] = dp[i - 1][j];
//
//				}
//				else {
//					if (flag[i][j - v[i] / 10])
//					{
//						dp[i][j] = max(dp[i-1][j],dp[i-1][j-v[i]/10]+vp[i]);
//					}
//					else
//						dp[i][j] = dp[i - 1][j];
//
//				}
//
//
//			}
//
//
//		}
//	}
//
//
//	cout << dp[m-1][n/10];
//
//	return 0;
//}
//#include<iostream>  
//#include<fstream>  
//#include<vector>  
//#include<algorithm>  
//
//using namespace std;
//
//#define MAX_N 2000  
//#define MAX_M 20  
//
//struct goods
//{
//	int v;
//	int p;
//	int q;
//};
//
//int main()
//{
//
//	int value, num, i, j, v, p, q, w;
//	goods g;
//	vector<goods> goodsList;
//	int f[MAX_M][MAX_N];
//	bool flag[MAX_M][MAX_N];
//
//	//初始化  
//	memset(f, 0, MAX_M * MAX_N * sizeof(int));
//	memset(flag, false, MAX_M * MAX_N * sizeof(bool));
//
//	cin >> value >> num;
//
//	for (i = 0; i<num; i++)
//	{
//		cin >> g.v >> g.p >> g.q;
//		goodsList.push_back(g);
//	}
//
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 0; j <= value; j++)
//		{
//			w = goodsList[i - 1].v*goodsList[i - 1].p;
//
//			if (goodsList[i - 1].q == 0)
//			{
//				if (j < goodsList[i - 1].v)
//				{
//					f[i][j] = f[i - 1][j];
//				}
//				else
//				{
//					flag[i][j] = true;
//					f[i][j] = max(f[i - 1][j], f[i - 1][j - goodsList[i - 1].v] + w);
//				}
//			}
//			else
//			{
//				if (j < goodsList[i - 1].v)
//				{
//					f[i][j] = f[i - 1][j];
//				}
//				else
//				{
//					if (flag[i][j - goodsList[i - 1].v])
//					{
//						f[i][j] = max(f[i - 1][j], f[i - 1][j - goodsList[i - 1].v] + w);
//					}
//					else
//					{
//						f[i][j] = f[i - 1][j];
//					}
//				}
//			}
//		}
//	}
//
//	cout << f[num][value] << endl;
//
//	return 0;
//}
#include <string>
#include <iostream>
using namespace std;

int x, y;

void mark(string str)
{
	int len = str.length();
	int cursor = -1, lastc = -1;
	
	for (int i = 0; i<len; i++)
	{
		if (str[i] == ';')
		{
			lastc = cursor;
			cursor = i;
			int n = 0;
			int len = cursor - lastc;
			if (len > 4 || len <=2)
				continue;
			if (len == 4)
			{
				if (str[cursor - 1] >= '0'&&str[cursor - 1] <= '9')
					n = str[cursor - 1] - '0';
				else
					continue;
				if (str[cursor - 2] >= '0'&&str[cursor - 2] <= '9')
					n = n + 10 * (str[cursor - 2] - '0');
				else
					continue;
			}
			else if (len == 3) {
				if (str[cursor - 1] >= '0'&&str[cursor - 1] <= '9')
					n = str[cursor - 1] - '0';
				else
					continue;
			}
			 
			 
			if (str[lastc + 1] == 'A')
			{
				x -= n;
			}
			else if (str[lastc + 1] == 'S')
			{
				y -= n;
			}
			else if (str[lastc + 1] == 'W')
			{
				y += n;
			}
			else if (str[lastc + 1] == 'D')
			{
				x += n;
			}
		}
		
		
	}
}

int main()
{
	x = 0;
	y = 0;
	string str;
	string tmp = "";
	while (getline(cin, str))
		tmp += str;
	mark(tmp);
	cout << x << "," << y;

}