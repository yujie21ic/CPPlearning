// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
void func1();

int main()
{
	int a;
	std::cout << 1111 << std::endl;
	
	
	func1();
	std::cin >> a;
	std::cout << a << std::endl;
    return 0;
}

void func1()
{
	using namespace std;
	for (int i = 0; i < 100;i++)
		cout << "helloword!" << endl;
	
}