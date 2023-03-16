	#include<iostream>
	#include<conio.h>
	using namespace std;
	
	class node{
	    public:
		int data;
		node *next;	
	};
	
	
	class list:public node{
		
		
		node *front=NULL;
		node *rear=NULL;
		
		
		
		public:void enqueue(int item){
			
		
				
			node *temp=new node();
			temp->data=item;
			temp->next=NULL;
			
			if(front==NULL){
				
				front=temp;
				rear=front;
			
				
			}
			
			else{
				rear->next=temp;
				rear=temp;
				rear->next=front;
			}
					
		}
		
		
		
		public: void dequeue(){
			
			if(isempty()){
				cout<<"queue is empty";
			}
			
			else if (front==rear){
				front=rear=NULL;
				
			}
			
			else{
			
			     node *p=front;
			     front=front->next;
			     rear->next=front;
			     
			     cout<<"node deleted"<<p->data;
			     delete(p);
		}   }
		
		
		public:int isempty(){
			if (front==NULL&&rear==NULL){
				return 1;
			}
			
			else {
				return 0;
			}
			
		}
		
		
		
	   public: void showfront()
	{
	 if (isempty() ){
	 
	  cout<<"queue is Empty";}
	 else{
	 
	  cout<<"Element at top is : "<< front->data;}
	}
		
	
		
		
		
		
		
		
		public: void display(){
			
			if(front==NULL){
				
				cout<<"list is empty";
			}
			
			else {
				
				node*temp=front;
				
				while(temp!=rear){
					
					cout<<temp->data;
					temp=temp->next;
					
				}
				cout<<temp->data;
				
			}
			
			
		}
		
			
	};
		
	int main(){
		
	list s;
	int n,item, temp;
		
		do{
		 
		cout<<"choose option"<<endl;
		cout<<"1->enqueue"<<endl;
		cout<<"2->dequeue"<<endl;
		cout<<"3->showfront"<<endl;
		cout<<"4->display"<<endl;
		
		cin>>n;
		
		switch(n){
			
			case 0:
				break;
			case 1: 
			cout<<"enter data";
			cin>>item;
			s.enqueue(item);
			break;
			 case 2:
	
			 s.dequeue();	
			break;
			 
			  case 3:
			 	s.showfront();
			 	break;
			 	
			 	case 4:
			 		
			 		s.display();
			 		break;
			 	default:
			 		
			 		cout<<"enter correct choice";
			
		}
		
	}while(n!=0);
		
	   
		
		return 0;
	}
