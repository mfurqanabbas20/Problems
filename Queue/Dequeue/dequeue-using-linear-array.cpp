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
	
	
	public : void enqueue_at_front(int item){
		
	
		
		 if (front==-1&&rear==-1){
			
			front=0;
			rear=0;
			array[front]=item;
			cout<<"you have inserted"<<item<<"into dequeue at front";	
			
			
		}  else if(front!=0){
			
			front=front-1;
			array[front]=item;
			cout<<"you have inserted"<<item<<"into dequeue at front";
		}
			else{

           cout<<"dequeue is full";			
			
		}
		
	}
	
	public : void enqueue_at_rear(int item){
		
	 if(rear>=size-1) {
			cout<<"queue is full";
		}
		
		else if (front==-1&&rear==-1){
			
			front=0;
			rear=0;
			
			array[rear]=item;
			cout<<"item inserted at rear";
		
			
			
		}  else {
			
			rear=rear+1;
			array[rear]=item;
			 cout<<"you have inserted"<<item<<"into dequeue at rear";
		}
		
		
		
	}
	
	
		public : void dequeue_at_front(){
		
		if(front==-1){

           cout<<"queue is empty";			
			
		}
		
		else if (front==0&&rear==0){
			
			front=rear=-1;
			cout<<"you deleted item from queue";
			
		}
		
		
		 else{
			
			front=front+1;
			cout<<"you deleted item from queue";
		}
		
	}
	
		public : void dequeue_at_rear(){
		
		if(front==-1){

           cout<<"queue is empty";			
			
		}
		
		else if (front==rear){
			
			front=rear=-1;
			cout<<"you deleted item from queue";
			
		}
		
		
		 else{
			
			rear=rear-1;
			cout<<"you deleted item from queue";
		}
		
	}

	
	
	public: void display(){
		int i;
		if(front==-1){
		    cout<<"queue is empty";
		} else{
		        
		        for(i=front;i<=rear;i++){
		        	cout<<array[i];
				}

  
		
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
