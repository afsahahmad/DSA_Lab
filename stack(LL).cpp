#include<iostream>
using namespace std;
struct node
{
	int val;
	node* next;
};
class mystack
{
	node* head;
	int stacksize;
	public:
		mystack()
		{
			head=NULL;
			stacksize=0;
		}
		void push(int g)
		{
			node* temp=new node();
			temp->val=g;
			temp->next=head;
			head=temp;
			cout<<g<<" pushed into stack"<<endl;
			stacksize++;
		}
		void pop()
		{
			if(head==NULL)
			{
				cout<<"Stack is empty!";
				return;
			}
			node* temp=head;
			head=temp->next;
			temp->next=NULL;
			delete temp;
			cout<<"element popped!"<<endl;
			stacksize--;
		}
		int top()
		{
			if(head==NULL)
			{
				cout<<"NO top element!"<<endl;
				return -1;
			}
			cout<<"Top element is:"<<head->val<<endl;
			return head->val;
		}
		int size()
		{
			cout<<"Size of stack is:"<<stacksize<<endl;
			return stacksize;
		}
		int empty()
		{
			if(head==NULL)
			{
				cout<<"stack is empty!"<<endl;
				return 1;
			}
			cout<<"Stack is not empty!"<<endl;
			return 0;
		}
};
int main()
{
	mystack s1;
	s1.empty();
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.size();
	s1.top();
	s1.pop();
	s1.top();
	s1.size();
	return 0;
}
