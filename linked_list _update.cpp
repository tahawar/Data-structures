#include<iostream>

using namespace std;

struct node{
	int data;
	node *next;
};

class linklist{
	public:
		node* head ,*curr;
		int pos;
		int size;
		
		
		public:
			
			linklist(){
				head=NULL;
				curr=NULL;
				pos=1;
				size=1;
				
			}
			
			////// create node ////////
	void createnode(int value){
    	
      
	      if(head==NULL)
	      
	      {	node *temp=new node;
	      
	      	 temp->data=value;
	         temp->next=NULL;
	      
	        head=temp;
	        curr=head;
	        
	        return;
        }
      
     
    
      
        node *temp=new node;
        
        temp->data=value;
        temp->next=NULL;
        
        
        curr->next=temp;
        curr=curr->next;
        pos++;
        size++;
        
    }
        
   
		    
		    /////////////  insert at position //////////
	void insertanyplace(int val,int pos){
			    
					curr=head;
			    
					if(pos<1 ||  pos>size+1){
			    		cout<<"invalid postion"<<endl;
			    		return;
					}
					
					
					node *temp=new node;
					temp->data=val;
					temp->next=NULL;
					
				
					if(pos==1){
						curr->next=head;
						head=curr;
					}else{
						curr=head;
						for(int i=1;i<(pos-1);i++){
							curr=curr->next;
							temp->next=curr->next;
							curr->next=temp;
							
						}
						size++;
					}
			}
			
			///////// delete at position /////
   void delteatpostion(int pos){
			    
					curr=head;
			    	if(pos<1 ||  pos>size+1){
			    		cout<<"invalid postion"<<endl;
			    		return;
					}
					
					
				
					if(pos==1){
						head=curr->next;
						delete curr;
					}else{
						curr=head;
						for(int i=1;i<(pos-1);i++){
							curr=curr->next;
							node* dlptr=curr->next;
							curr->next=dlptr->next;
							delete dlptr;
							
						}
						size--;
					}
			}
			
			//////// search //////////////////
			
	int search(int val){
				
					curr=head;
					if(head==NULL){
						return 0;
					}
					int pos=1;
					while(curr != NULL){
						if(curr->data == val){
							return pos;
						}
						curr=curr->next;
						pos++;
					}
					return 0;
				
			}
			
			///// empty ///////
    void empty(){
		    	
				curr=head;
		    	
		    	if(head == NULL){
		    		cout<<"link list is empty"<<endl;
		    		return;
				}else
				{
					cout<<"list is not empty"<<endl;
				
				}
	}
     
     
             //////////////// display ////////////
    void display()
     {
		    
			  curr=head;
		      while(curr!=NULL)
		      {
		
		      cout<<curr->data<<"\t";
		      curr=curr->next;
		     }
    } 
	
	
};

int main(){
	
	linklist l;

	l.createnode(5);
	l.createnode(6);
	l.createnode(7);
	l.createnode(8);
	l.empty();

	
	l.display();
	cout<<endl;
	cout<<"detle at position (3)   \t";
		l.delteatpostion(3);
		l.display();
		cout<<endl;
		cout<<"search value 6 position and return  \t";
		cout<<l.search(6);
		cout<<endl<<"insert in any place (3) \t ";
		l.insertanyplace(9,3);
		l.display();
	
	
	
	
	
	return 0;
}
