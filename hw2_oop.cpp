#include <iostream>
#include <cstring>
using namespace std;


class String
{
private:
	char* str;
	int size;

public:
	String()
	{
		size = 80;
		str = new char[size];
		str[0] = '\0';
	}
	String(int size_1)
	{
		size = size_1;
		str = new char[size];
		str[0] = '\0';
	}
	String(const char* userinput)
	{
		size = strlen(userinput);
		str = new char[size+1];
		int i = 0;
		while (userinput[i] != '\0')
		{
			str[i] = userinput[i];
			i++;
		}
		str[size] = '\0';
	}
	~String()
	{
		delete[]str;
	}
	void showString()
	{
		cout << str << endl;
	}
};


int main()
{
	cout << "Default: ";
	String st;
	st.showString();

	String st2(35);
	cout << "Custom size: ";
	st2.showString();

	String st3("Test2321313131");
	cout << "String: ";
	st3.showString();



	return 0;
}