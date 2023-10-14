#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
	public:
		Node *head;
		Node(){
			head=NULL;
		}		
	void insert_at_end(int n){
		if(head==NULL){
			head=new Node;
			head->data=n;
			head->next=head;
			
		}
		else{
			Node *p ,*ptr;
			ptr=head;
			while(ptr->next!=head){
				ptr=ptr->next;
			}
			p=new Node;
			p->data=n;
			p->next=head;
			ptr->next=p;
			
		}
	}	

	void display(){
		Node *ptr;
		ptr=head;
	while(ptr!=head){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}	
}
	};	
	int main(){
		Node n;
		n.insert_at_end(10);
		n.insert_at_end(20);
		n.insert_at_end(30);
		n.insert_at_end(40);
		n.display();
		return 0;
	}

	

