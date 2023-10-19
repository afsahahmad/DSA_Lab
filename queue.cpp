#include<iostream>
using namespace std;
int queue[5];
int n=5;
int Front,Rear;
void Insert()
{
	int a;
	if(Rear=n-1)
	{
		cout<<"Queue overflow!"<<endl;
	}
	else
	{
		if(Front=-1)
			Front=0;
			cout<<"Enter a number:"<<endl;
			cin>>a;
			Rear++;
			queue[Rear]=a;
	}
	return;
}
void Delete()
{
	if(Front=Rear=-1||Front>Rear)
	{
		cout<<"Queue underflow!"<<endl;
	}
	else
	{
		cout<<"Element deleted:"<<queue[Front]<<endl;
		Front++;
	}
	
}
void display()
{
	if(Front=Rear=-1)
	{
		cout<<"Queue is empty!"<<endl;
	}
	else
	{
		cout<<"Queue Elements:"<<endl;
		for(int i=Front;i<=Rear;i++)
		{
			cout<<queue[i]<<endl;
		}
	}
}
int main()
{
	int aa;
	Insert();
	Insert();
	Insert();
	Insert();
	Insert();
	display();
	Delete();
	return 0;
}
