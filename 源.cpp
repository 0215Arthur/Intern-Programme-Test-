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
#include <iostream>
#include <vector>
using namespace std;
const int N = 11;
int result[N];
int drink(int c)
{
	int sum = 0;

	while (1) {
		int tmp = 0;
		tmp = c / 3;
		c = c % 3 + tmp;
		sum += tmp;
		if (tmp == 0 && c == 2) {
			sum++;
			break;
		}
		else if (tmp == 0 && c == 1)
			break;
	}
	return sum;
}

int main()
{
	int s;

	int n = 0;
	while (1)
	{
		cin >> s;
		if (s == 0)
			break;
		result[n] = drink(s);
		n++;
	}
	for (int i = 0; i < n; i++)
		cout << result[i] << endl;
	return 0;
}