#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
	int a[]={1,6,9,19},n=6,x;
	fstream f;
	
	f.open("D:\\Dev c\\files\\num",ios::app|ios::binary);
	if(f.fail())
	{
		cout<<"fail1"<<endl;
		exit(1);
	}
	for(int i=0;i<n;i++)
	f.write((char*)&a[i],sizeof(int));
	f.close();
	
	f.open("D:\\Dev c\\files\\num",ios::in|ios::binary);
	if(f.fail())
	{
		cout<<"fail2"<<endl;
		exit(2);
	}
	f.read((char*)&x,sizeof(int));
	while(!f.eof())
	{
		cout<<x<<" ";
		f.read((char*)&x,sizeof(int));
	}
	cout<<endl;
	f.close();
	
	system("pause");
	return 0;
}
