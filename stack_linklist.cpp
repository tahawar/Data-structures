#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

class stack{
	
	private:
		node* top;
		int size;
		public:
		stack(){
			top=NULL;
			size=0;
		}
		
		void push(int val);
		
		void pop();
		
		void display();
};
	void stack:: push(int val){
			
			
			if(top == NULL){
				node* temp=new node;
				temp->data=val;
				temp->next=NULL;
				top=temp;
				size++;
				return;
				
			}
			
			node* temp=new node;
			temp->data=val;
			temp->next=top;
			top=temp;
			size++;
		}
		
		void stack:: pop(){
				node* temp=top;
			if(top == NULL){
				cout<<"stack is under flow"<<endl;
				return;
			}
		
			top=top->next;
			delete temp;
			size--;
			cout<<"after one pop  "<<endl;
		}
		
		void stack:: display(){
				node* temp=top;
				cout<<"value in stack is    ";
				while(temp != NULL){
					cout<<temp->data<<"  ";
					temp=temp->next;
				}
			cout<<endl<<"size of stack is   "<<size;
			cout<<endl;
		}

int main(){
	
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.display();
	
	s.pop();
	s.display();
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.display();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	
	s.display();
		
	
	
	
	system("pause");
}



