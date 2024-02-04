/*
*最长单词
思路：
例子1：
I am a student
比如计算am的长度
我们需要找到a的前一个位置(即空格，si)和m的后一个位置(即空格，sii)
而 am的长度siii就相当于sii-si-1;

PS：为了防止最开始的单词就是最长的单词，比如:Although she likes sports;
我们需要在这个字符串的前面(B的前面加一个空格，便于计算si的位置)
则Although的长度为si=0，sii=9，siii=sii-si-1=8（注意：此时A的坐标为1）
同理 如果最后的单词最长就得在尾字母的后面加一个空格 便于计算sii的位置

输入样例:
To xhh:
	you are so scrazy
	i am different from you
	you are a sbbbbbbbbbbbbb
						Your:Li.

修改时间:2023.11.4 11:46
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll si, sii, siii;//si表示一个单词的首字母的前一个位置，sii表示一个单词的末尾字母的后一个位置，siii表示该单词的长度 	
ll maxx = -9999, maxi, maxii;//maxx表示最长单词的长度 maxi表示最长单词的首字母的前一个位置 maxii表示最长单词的后一个位置 	
char s1 = ' ';//表示需要寻找的空格 
string s, ss;
int main()
{
	si = 0;
	sii = 0;
	while (getline(cin, s))//一直输入字符串s 
	{
		for (int i = 1; i <= s.size() - 1; i++)
		{
			if (s[i] == ',' || s[i] == '?' || s[i] == '!' || s[i] == ';' || s[i] == '"' || s[i] == ':' || s[i] == '<' || s[i] == '>' || s[i] == '#') s[i] = ' ';
		}
		s = ' ' + s + ' '; //让该字符串前面和后面都有空格
		//防止最长的单词是第一个单词或最后一个单词 导致无法判断 
		if (s.find(s1) == string::npos)
		{
			continue;//如果找不到空格的位置就跳过此循环 
		}
		for (int i = 0; i < s.size() - 1; i++)//用来计算最长单词 也是核心代码 具体等到学校我再抽空跟你讲 
		{
			si = sii;
			sii = s.find(s1, sii + 1);
			siii = sii - si - 1;
			if (siii > maxx)//比较 得出最长的单词 
			{
				ss = "";
				maxx = siii;
				maxi = si;
				maxii = sii;
				ss = s.substr(maxi + 1, maxii - maxi - 1);//记录最长单词 
			}
		}
		if (s[s.size() - 2] == '.')//遇到句子结尾标志.就结束 
		{
			if (s[maxii - 1] == '.') //如果最长单词的最后一位是.就减去这个长度 
				maxii -= 1;
			if (ss[ss.size() - 1] == '.') //如果最长单词的最后一位是.就删掉 
				ss.erase(ss.size() - 1);
			break;//.为结束标志 
		}
	}
	cout << maxii - maxi - 1 << endl;//输出最长的单词长度 
	printf("%s", ss.c_str());//输出最长的单词
	//*string 不能直接在printf使用 需要进行c语言的转换 
	cin.get();
}

/*
课后练习

* 自己依次将查找3，查找4，查找5都做一遍
	不懂的看这几个程序

*进阶:									//当结尾有标点符号时不计入再内
	例子:Although,you are clever.
	正确输出:Although
	错误输出:Although,you
		(用这个程序运行的结果)
	提示:在计算最长程序时判断是否有除.以外的标点符号.
*/
