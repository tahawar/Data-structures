#include<iostream>

using namespace std;

struct node{
	int data;
	node *next;
	node *per;
	
};

class Dll{
	node* head;
	node* curr;
	
	public:
		
		Dll(){
			head=curr=NULL;
			
			
		}
		
		~Dll(){
			
		}
		
		void dllf(int val){
				//	curr=head;
		if(head==NULL){
			 head  =new node;
			head->data=val;
			head->next=NULL;
			head->per=NULL;
				curr=head;
			return;
		}
			
			 node *temp =new node;
		
		temp->data=val;
		curr->next=temp;
		temp->per=curr;
	//	curr->next=temp;
		curr=temp;
		curr->next=NULL;

		
		

		
	}
	
		void add(int val ,int num){
				curr=head;
				if(head==NULL){
					return;
					
				}
				
				while(curr!=NULL){
					if(curr->data==val){
						node *temp=new node;
						temp->data=num;
						temp->next=curr->next;
						curr->next=temp;
						temp->per=curr;
						temp->next->per=temp;
					}
					
					curr=curr->next;
				}
			}
			void del(int val){
				curr=head;
				if(head==NULL){
					return;
				}
				while(curr!=NULL){
				
				if(curr->data==val){
					node *temp;
					temp=curr->per;
				
	                  curr->per->next=curr->next;
	                  curr->next->per=curr->per;
	                   
	                  delete curr;
	                  curr=temp;
				}
				curr=curr->next;
			}
			}
			
			void del_end(){
				curr=head;
				if(head==NULL){
					return;
				}
				while(curr!=NULL){
					if(curr->next==NULL){
					
						node* temp;
						temp=curr->next;
						
						curr->per->next=NULL;
						delete temp;
			}
				
				
				curr=curr->next;	
				}
				
			}
	
	void display(){
		curr=head;
		
		 
		
		if(head==NULL){
			return;
			
		}
		
	//	curr=temp;
		while(curr!=NULL){
			cout<<curr->data<<"\t";
			curr=curr->next;
		}
		
		cout<<endl;
	}
	
	
	
};


int main(){
	
	Dll l;
	
	l.dllf(5);
	l.dllf(6);
	l.dllf(7);
	l.dllf(8);
	l.dllf(9);
	
	l.display();
	
	l.add(7,4);
	l.display();
		
	l.del(4);
	l.display();
	
	l.del_end();
	l.display();
	
	
	return 0;
	
	
}
