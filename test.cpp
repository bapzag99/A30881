#include <iostream>
#include <math.h>
using namespace std;

bool songuyento(int x);//It's a junction program to check a prime number.

int main()
{
	int n;
	cout<<"Nhap so can kiem tra: ";cin>>n;
	if (n<2)
		cout<<"So "<<n<<" khong phai la so nguyen to.\n";
	else{
		if (songuyento(n))
			cout<<"So "<<n<<" la so nguyen to.\n";
		else
			cout<<"So "<<n<<" khong phai la so nguyen to.\n";
		}
	return 0;
}

bool songuyento(int x)
{
	for (int i=2;i<=(int)sqrt(x);i++)
		{
			if (x%i==0)
				return false;
		}
		return true;
			
}
