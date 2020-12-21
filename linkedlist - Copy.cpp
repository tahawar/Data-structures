#include<iostream>

using namespace std;

struct node
{
	int data;
	node* next;
};

 class list
  {
    public:
    node *head, *curr;
    public:
    list()
    {
      head=NULL;
      curr=NULL;
    }
void createnode(int value)
    {
    	
      
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
        
        
		
    }
    
    
    void add(int key, int val ){
  	curr=head;
  	int count=0;
	  int countt=0;
  	if(head==NULL){
  		
  		return;
	  }
	  
	  while(curr!=NULL){
	  	if(curr->data == key){
	  		node *temp=new node;
	  		temp->data=val;
	  		temp->next=NULL;
	  		
	  		temp->next=curr->next;
	  		
	  		curr->next=temp;
	  	//	curr=curr->next;
	  		
	  		
	  		
		  }
		  curr=curr->next;
		  count++;
		  
	  }
	  cout<<endl;
	  cout<<"number of nodes\t"<<count;
	  
	  
	  curr=head;
	  
	  while(curr!=NULL){
	  	
	  	if(countt==count/2){
	  		cout<<"   middle\t";
	  		cout<<curr->data;
	  		cout<<"   ";
		  }
	  	
	  	curr=curr->next;
	  	countt++;
	  }
  }
  
  
  
     void display()
  {//cout<<"heloo";
    node *temp=new node;
    curr=head;
    while(curr!=NULL)
    {
//cout<<"cincin";
      cout<<curr->data<<"\t";
      curr=curr->next;
    }
  } 
  
  void  del(int key){

  	curr=head;
  	node *temp1=new node;
  	if(head==NULL){
  		cout<<"hello";
  		return;
  		
	  }
	  
	  while(curr!=NULL){
	  //cout<<"hello";
	  
	  if(curr->next->data==key){
	  /*	temp1->next=curr->next->next;
	  	temp1->data=curr->next->data;
	  	delete curr->next;
	  	curr->next=temp1->next;
	  	cout<<temp1->data;*/
	  	
	  	temp1->next=curr->next->next;
	  	cout<<curr->next->data;
		 delete curr->next;
		 curr->next=temp1->next;
		  
	  }
	  	
	  
	  		
	 //	temp1=curr->next;
	  //		curr->next=temp1->next;
	  		
	  	//	curr->next->next=curr->next;
	  	//	curr->next=curr->next->next;
	  	//	delete temp1;
		  
		/*  temp1->next=curr->next->next;
		 delete curr->next;
		 curr->next=temp1->next;
		  delete curr->next;*/
		  
		  
		  curr=curr->next;
	  }
	  	cout<<endl<<"hello";
	  		
  }
  
  void del_first(){
  	curr=head;
  	node*temp1=new node;
  	temp1=head;
  	
  	if(head==NULL){
  		cout<<"hello";
  		return;
	  }
	  cout<<endl;
	//  cout<<"hello";
	  head=head->next;
	  
	  curr=head;
	  //curr->next=head;
	//  curr=head;
	  
	  delete temp1;
  }
  
  void del_end(){
  	curr=head;
  	node *temp1=new node;
  	if(head=NULL){
  		return;
	  }
	  
	  while(curr!=NULL){
	  	
	  	if(curr->next!=NULL){
		  
		  temp1=curr->next;
	  	curr->next=NULL;
	  	delete temp1;
	  }
	  	curr=curr->next;
	  }
  	
  }
  void del_all(){
  	
  	curr=head;
  	if(head==NULL){
  		return;
	  }
	  
	  while(curr!=NULL){
	  	node *temp=new node;
	  	
	temp=curr;
	temp->next=curr->next;
	cout<<"this value is to be deleted"<<temp->data;
	delete temp;
	curr=curr->next;
//	delete temp;
	  }
  	
  }
  
  
  
	  };
	  
	  int main(){
	  	
	  	list l;
	  	
	  	cout<<"link list  ";
	  	l.createnode(5);
	  	l.createnode(6);
	  
	  	l.createnode(8);
	  	l.createnode(9);
	  	//	l.add(6,7);
	  	
	  	l.display();
	  	cout<<endl;
	  	cout<<"add  ";
	    l.add(6,7);
		l.display();
			cout<<endl;
			
			l.del_all();
			l.display();
				  	
		 l.del_first();	  	
   l.display();
			  	
				  		cout<<endl;
				  		l.del_end();
				  		l.display();
				  		cout<<endl;
	  			
		l.del(7);
   	  			
	  			l.display();
	  				
	  	
   
	  	
	  	
	  	
	  	return 0;
	  	
	  	
	  	
	  }


