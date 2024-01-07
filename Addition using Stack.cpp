#include<iostream>
#include<cmath>
#include<cctype>
#include<stack>


using namespace std;


string additionusingstack(string n1, string n2)
{
	stack<char> s1;
	stack<char> s2;
	stack<char> s3;
	char operand1, operand2, operand3;
	string ans;
	for (int i = 0; i < n1.length(); i++)
	{
		s1.push(n1[i]);
	}
	for (int i = 0; i < n2.length(); i++)
	{
		s2.push(n2[i]);
	}

	while (s1.top() != -1 && s2.top()!=-1)
	{
		operand1 = s1.top();
		s1.pop();
		operand2 = s2.top();
		s2.pop();

		s3.push((operand1 -'0') + (operand2 - '0'));
	}

	while (s3.top() != -1)
	{
		ans += s3.top();
			s3.pop();
	}
	//for (int i = 0; i < s3.size(); i++)
	//{
	//	 ans += s3.top();
	//	 s3.pop();
	//}
	return ans;
}
int main()
{
	string number1, number2;
	string ans;
	cout << "Enter two numbers which you want to add" << endl;
	cout << "Enter first number :"<<number1 << endl;
	cout << "Enter second number :" << number2 << endl;

	ans = additionusingstack(number1, number2);
	return 0;



}