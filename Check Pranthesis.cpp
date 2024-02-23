#include<iostream>
#include<stack>

using namespace std;


bool checker(string c)
{
	stack<char> b;
	bool ans = true;
	for (int i = 0; i < c.length(); i++)
	{
		char a = c[i];
		if (a == '(' || a == '[' || a ==  '{')
		{
			b.push(a);
		}
		else if (a == ')')
		{
			if (!c.empty() && b.top() == '(')
			{
				b.pop();
			}
			else
			{
				//cout << "u" << endl;
				ans = false;

				break;
			}
		}
		else if (a == ']')
		{
			if (!c.empty() && b.top() == '[')
			{
				b.pop();
			}
			else
			{
				ans = false;
				break;
			}
		}
		else if (a == '}')
		{
			if (!c.empty() && b.top() == '{')
			{
				b.pop();
			}
			else
			{
				ans = false;
				break;
			}
		}
			
		//b.push(a);
		
	}

	if (!b.empty())
		return false;


	return ans;
}

int main()
{
	string infix;

	cout << "Enter your exprssion" << endl;
	cin >> infix;

	if (checker(infix))
		cout << "Valid" << endl;
	else
		cout << "Invalid" << endl;

	//checker(infix);

	return 0;
}
