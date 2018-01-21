
#include <iostream>
void func1();
int func2(int x);
struct inflatable
{
	char name[20];
	float volume;
	double price;
};


struct QADATASTRUCT
{
	float high;
	float low;
	float open;
	float close;
	float volume;
	float amount;
	char datetime[19];
};


union ORDERID//could be used at one time 
{
	int id;
	char id[8];
};

struct ORDER
{
	ORDERID id;
	QADATASTRUCT market;

};

inflatable func3(int x);
ORDER func4();
int main()
{
	int a;
	std::cout << 1111 << std::endl;
	std::string x;

	func3(1);
	//func1();
	//std::cout << func2(2) << std::endl;
	std::cin >> a;
	//std::cout << a << std::endl;
	return 0;
}

void func1()
{
	using namespace std;
	
	for (int i = 0; i < 100; i++)
		cout << "helloword!"<<  &func2 << endl;

}

int func2(int x)
{
	return x + 1;
}


inflatable func3(int x)
{
	using namespace std;
	inflatable gifts[100];
	cin >> gifts[0].volume;
	cout << gifts[0].volume << endl;
	return gifts[0];
}

ORDER func4()
{
	ORDER l ={
		1,{
			1,2,3,4,1001,1000,'2017-01-01'
		}
	};
	return l;
}