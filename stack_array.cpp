#include<iostream>
using namespace std;

class stackarray{
	
	private:
		int *arr;
		int size;
		int top;
	
		
		public:
			stackarray(int s){
				size=s;
				arr = new int[size];
				top=-1;
			}
			
			
			void push(int val);
			int pop();
			
			void print();
			
			bool isempty();
		
};

      void stackarray :: push(int val){
					
					if(top == size-1){
						cout<<"stack is overflow"<<endl;
						return;
						
					}
				 top++;
				 arr[top]=val;
			
    	}
			
			int stackarray ::  pop(){
				
				if( isempty()){
					cout<<"stack is underflow"<<endl;
					return 0;
				}
			return arr[top--];
			}
			
			
			
			void stackarray :: print(){
				if(isempty()){
						cout<<"stack is underflow"<<endl;
					return ;
				}
				
				cout<<"value  that is present in stack"<<endl;
				for(int i=0; i<= size-1 ;i++){
					cout<<*(arr+i)<<" ";
				}
				cout<<endl;
			}
		
		
			
			bool stackarray :: isempty(){
				if(top == -1){
					return true;
					
				}
				else 
					return false;
			}
			


int main(){
	
	stackarray l(8);
	l.push(1);
	l.push(2);
	l.push(3);
	l.push(4);
	l.push(5);
	l.push(6);
	l.push(7);
	l.push(8);
	l.print();
	

    cout<<"vaule that is return by pop function in stack in the form of LIFO"<<endl;
    while( ! l.isempty()){
    	cout<<l.pop()<<" ";
	}

	
	
	
	return 0;
}
