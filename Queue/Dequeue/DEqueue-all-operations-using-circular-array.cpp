#include<iostream>
using namespace std;

class queue{
	
    int rear;
	int size;
	int front;
	int array[5];
	public : queue(){
		
		size=5;
		front=-1;
		rear=-1;
		
		
	}
	
	public :int isempty(){
		
		if(front==-1){
			return 1;
			
		}
		
		else{
			
			return 0;
		}
		
	}
	
	
	public :int isfull(){
		
		
			if((rear==size-1&&front==0)||(front==rear+1)){
			return 1;
			
		}
		
		else{
			
			return 0;
		}
		
	}
		
	
	public : void enqueue_at_front(int item){
		
		if(isfull()){

           cout<<"queue is full";			
			
		}
		
		else if (front==-1&&rear==-1){
			
			front=0;
			rear=0;
			array[front]=item;
			cout<<"you have inserted"<<item<<"into dequeue at front";
			
		} else if(front==0){
			
			  front =size-1;
			  array[front]=item;
			  cout<<"you have inserted"<<item<<"into dequeue at front";
			  
			
			
		} else{
			
			front=front-1;
			array[front]=item;
		}
		
	}
	
	public : void enqueue_at_rear(int item){
		
		if(isfull()){

           cout<<"queue is full";			
			
		}
		
		else if (front==-1&&rear==-1){
			
			front=0;
			rear=0;
			
			array[rear]=item;
			cout<<"item inserted at rear";
		
			
			
		} else if(rear==size-1){
			
			  rear=0;
			  array[rear]=item;
			  cout<<"you have inserted"<<item<<"into dequeue at rear";
			  
			
			
		} else{
			
			rear=rear+1;
			array[rear]=item;
		}
		
	}
	
	
		public : void dequeue_at_front(){
		
		if(isempty()){

           cout<<"queue is empty";			
			
		}
		
		else if (front==0&&rear==0){
			
			front=rear=-1;
			cout<<"you deleted item from queue";
			
		}
		
		else if(front==(size-1)){
			
			cout<<"element deleted";
			front=0;
		}
		
		 else{
			
			front++;
			cout<<"you deleted item from queue";
		}
		
	}
	
		public : void dequeue_at_rear(){
		
		if(isempty()){

           cout<<"queue is empty";			
			
		}
		
		else if (front==rear){
			
			front=rear=-1;
			cout<<"you deleted item from queue";
			
		}
		
		else if(rear==0){
			
			cout<<"element deleted";
			rear=size-1;
		}
		
		 else{
			
			rear=rear-1;
			cout<<"you deleted item from queue";
		}
		
	}
	public: void display(){
		int i;
		if(isempty()){
		    cout<<"queue is empty";
		} else{
		
			


				cout<<"\nQueue elements";
				i=front;
				if(front<=rear)
				{
				while(i<=rear)
				cout<<array[i++];
				}
				else
				{
				while(i<=size-1)
				cout<<array[i++];
				i=0;
				while(i<=rear)
				cout<<array[i++];
				}

  
		
}

   cout<<"element at index"<<i<<array[0];
   cout<<"element at index"<<i<<array[4];
		
	}

	
	
		public: void frontreturn(){
		
		if(isempty()){
		    cout<<"stack is empty";
		}
		
		else{
			
				
					
					cout<<array[front];
				
		}
	
		
	}
	
	
	
};


int main(){
	
	
	queue s;
	

	int n,item, temp;
	
	do{
	 
	cout<<"choose option"<<endl;
	cout<<"0->exit"<<endl;
	cout<<"1->enqueue at front"<<endl;
	cout<<"2->enqueue at rear"<<endl;
	cout<<"3->dequeue at front"<<endl;
	cout<<"4->dequeue at rear"<<endl;
	cout<<"5->display"<<endl;
	
	cin>>n;
	
	switch(n){
		
		case 0:
			break;
		case 1: 
		cout<<"enter data";
		cin>>item;
		s.enqueue_at_front(item);
		break;
		 case 2:
         cout<<"enter data";
		cin>>item;
		 s.enqueue_at_rear(item);	
		break;
		 
		  case 3:
		 	s.dequeue_at_front();
		 	break;
		 	
		 	case 4:
		 		s.dequeue_at_rear();
		 		break;
		 	
		 	case 5:
		 		
		 		s.display();
		 		break;
		 	default:
		 		
		 		cout<<"enter correct choice";
		
	}
	
}while(n!=0);
	
	
	
	return 0;
}
