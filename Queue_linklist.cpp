#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
class queue{
	private:
		node* front;
		node *rear;
		int size;
	public:	
		queue(){
			front=NULL;
			rear=NULL;
			size=0;
		}
		
       void enqueue(int val);
        void dequeue();
        void display();
        
        
        
};

	void  queue:: enqueue(int val){
			
			if(front == NULL){
				node* temp=new node;
				temp->data=val;
				temp->next=NULL;
				front=temp;
				rear=front;
				size++;
				return;
			}
			
			node *temp =new node;
			temp->data=val;
			temp->next=NULL;
			rear->next=temp;
			rear=rear->next;
			size++;
			
		}
		
		
		void queue:: dequeue(){
			node* temp=front;
			
			if(front == NULL){
				cout<<"queue is underflow \n";
				return;
				
			}
			cout<<"after one dequeue  "<<endl;
			if(front == rear){
				delete temp;
				front=NULL;
				rear=NULL;
				size--;
				return;
			}
			front=front->next;
			size--;
			delete temp;
			
		}
		
		
		
		void queue:: display(){
			node* temp=front;
			
			if(front == NULL){
				cout<<"queue is empty"<<endl;
				return;
			}
			cout<<"value in queue       ";
			while(temp != NULL){
				cout<<" "<<temp->data;
				temp=temp->next;
				
			}
		cout<<endl;
		cout<<"value of rare         "<<rear->data<<endl;
		cout<<"size of the queue     "<<size<<endl;
		}





int main(){
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.display();
	
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.display();
	q.enqueue(1);
	q.display();
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.display();
	
	system("pause");
}







