/*
*�����
˼·��
����1��
I am a student
�������am�ĳ���
������Ҫ�ҵ�a��ǰһ��λ��(���ո�si)��m�ĺ�һ��λ��(���ո�sii)
�� am�ĳ���siii���൱��sii-si-1;

PS��Ϊ�˷�ֹ�ʼ�ĵ��ʾ�����ĵ��ʣ�����:Although she likes sports;
������Ҫ������ַ�����ǰ��(B��ǰ���һ���ո񣬱��ڼ���si��λ��)
��Although�ĳ���Ϊsi=0��sii=9��siii=sii-si-1=8��ע�⣺��ʱA������Ϊ1��
ͬ�� ������ĵ�����͵���β��ĸ�ĺ����һ���ո� ���ڼ���sii��λ��

��������:
To xhh:
	you are so scrazy
	i am different from you
	you are a sbbbbbbbbbbbbb
						Your:Li.

�޸�ʱ��:2023.11.4 11:46
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll si, sii, siii;//si��ʾһ�����ʵ�����ĸ��ǰһ��λ�ã�sii��ʾһ�����ʵ�ĩβ��ĸ�ĺ�һ��λ�ã�siii��ʾ�õ��ʵĳ��� 	
ll maxx = -9999, maxi, maxii;//maxx��ʾ����ʵĳ��� maxi��ʾ����ʵ�����ĸ��ǰһ��λ�� maxii��ʾ����ʵĺ�һ��λ�� 	
char s1 = ' ';//��ʾ��ҪѰ�ҵĿո� 
string s, ss;
int main()
{
	si = 0;
	sii = 0;
	while (getline(cin, s))//һֱ�����ַ���s 
	{
		for (int i = 1; i <= s.size() - 1; i++)
		{
			if (s[i] == ',' || s[i] == '?' || s[i] == '!' || s[i] == ';' || s[i] == '"' || s[i] == ':' || s[i] == '<' || s[i] == '>' || s[i] == '#') s[i] = ' ';
		}
		s = ' ' + s + ' '; //�ø��ַ���ǰ��ͺ��涼�пո�
		//��ֹ��ĵ����ǵ�һ�����ʻ����һ������ �����޷��ж� 
		if (s.find(s1) == string::npos)
		{
			continue;//����Ҳ����ո��λ�þ�������ѭ�� 
		}
		for (int i = 0; i < s.size() - 1; i++)//������������� Ҳ�Ǻ��Ĵ��� ����ȵ�ѧУ���ٳ�ո��㽲 
		{
			si = sii;
			sii = s.find(s1, sii + 1);
			siii = sii - si - 1;
			if (siii > maxx)//�Ƚ� �ó���ĵ��� 
			{
				ss = "";
				maxx = siii;
				maxi = si;
				maxii = sii;
				ss = s.substr(maxi + 1, maxii - maxi - 1);//��¼����� 
			}
		}
		if (s[s.size() - 2] == '.')//�������ӽ�β��־.�ͽ��� 
		{
			if (s[maxii - 1] == '.') //�������ʵ����һλ��.�ͼ�ȥ������� 
				maxii -= 1;
			if (ss[ss.size() - 1] == '.') //�������ʵ����һλ��.��ɾ�� 
				ss.erase(ss.size() - 1);
			break;//.Ϊ������־ 
		}
	}
	cout << maxii - maxi - 1 << endl;//�����ĵ��ʳ��� 
	printf("%s", ss.c_str());//�����ĵ���
	//*string ����ֱ����printfʹ�� ��Ҫ����c���Ե�ת�� 
	cin.get();
}

/*
�κ���ϰ

* �Լ����ν�����3������4������5����һ��
	�����Ŀ��⼸������

*����:									//����β�б�����ʱ����������
	����:Although,you are clever.
	��ȷ���:Although
	�������:Although,you
		(������������еĽ��)
	��ʾ:�ڼ��������ʱ�ж��Ƿ��г�.����ı�����.
*/
