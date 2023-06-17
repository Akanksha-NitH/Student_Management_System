#include<iostream>
#include<conio.h>
using namespace std;
class Node{
	public:
	int roll_no;
	string name;
	float marks, per;
	Node *next_add;
};
class Linked_List{
	public:
		Node *head=NULL;
		void Insert(){
			int r;  //roll no.
			string n;  //name of students
			float m;   //marks
			cout<<"\n\n  Enter Roll No.";
			cin>>r;
			cout<<"\n\n Enter Name: ";
			cin>>n;
			cout<<"\n\n Enter Marks: ";
			cin>>m;
			Node *new_node = new Node;
			new_node -> roll_no = r;
			new_node -> name = n;
			new_node -> marks = m;
			new_node -> per = m/100*100;
			new_node -> next_add = NULL;
			if(head == NULL){
				head=new_node;
			}
			else{
				Node *ptr = head;
				while(ptr -> next_add !=NULL){
					ptr= ptr -> next_add;
				}
				ptr ->next_add = new_node;
			}
			cout<<"\n\n\n New Node  Inserted successfully ...";
		}
		void search()
		{
			
			if(head==NULL){
				cout<<"\n\n Linked List is Empty...";
			}
			else{
				int r, found=0;
				cout<<"\n\n Enter Roll No. For Search :";
				cin>>r;
				Node*ptr = head;
				while(ptr!=NULL){
					if(r== ptr -> roll_no){
						cout<<"\n\n Roll NO. : "<<ptr -> roll_no;
						cout<<"\n\n Name : "<<ptr -> name;
						cout<<"\n\n Marks : "<<ptr -> marks;
						cout<<"\n\n Per % : "<<ptr -> per;
						found++;
					}
					ptr = ptr -> next_add;
				}
				if(found==0){
					cout<<"\n\n  Search Roll NO. : "<<r<<"Can not found...";
				}
			}
		}
		void Count(){
			if(head==NULL){
				cout<<"\n\n Linked List is Empty... ";
			}
			else{
				int c=0;
				Node*ptr = head;
				while(ptr!=NULL){
					c++;
					ptr=ptr -> next_add;
				}
				cout<<"\n\n Total NO. of Nodes: "<<c;
			}
		}
		void Update()
		{
			if(head==NULL){
				cout<<"\n\n Linked List is Empty...";
			}
			else{
				int r, found=0;
				cout<<"\n\n Enter Roll No. For Updation :";
				cin>>r;
				Node*ptr = head;
				while(ptr!=NULL){
					if(r== ptr -> roll_no){
						cout<<"\n\n  Enter New Roll No.";
			            cin>>ptr -> roll_no;
			            cout<<"\n\n Enter Name: ";
			            cin>>ptr -> name;
			            cout<<"\n\n Enter Marks: ";
			            cin>>ptr ->marks;
                        ptr-> per = ptr -> marks/100*100;
                        cout<<"\n\n\n Record update successfully...";
						found++;
					}
					ptr = ptr -> next_add;
				}
				if(found==0){
					cout<<"\n\n  Update Roll NO. : "<<r<<"Can not found...";
				}
			}
		}
		void Del()
		{
			if(head==NULL){
				cout<<"\n\n Linked List is Empty...";
			}
			else{
				int r, found=0;
				cout<<"\n\n Enter Roll No. For Deletion :";
				cin>>r;
				if(r== head ->roll_no){
					Node*ptr =head;
					head=head ->next_add;
					cout<<"\n\n record Deleted Successfully...";
					found++;
					delete ptr;
				}
				else
				{
				   Node*pre = head;
				   Node*ptr = head->next_add;
				   while(ptr!=NULL){
				   	if(r = ptr -> roll_no)
				   {
				   	 pre -> next_add = ptr -> next_add;
				   	 cout<<"\n\n record Deleted Successfully...";
						found++;
						delete ptr;
						break;
				   }
				   pre = ptr;
				   ptr = ptr-> next_add;
				   
				   }	
				}
				if(found == 0){
					cout<<"\n\n Delete Roll NO. : "<<r<<"Can not found...";
				}
			}
		}
		void show(){
			
			if(head==NULL){
				cout<<"\n\n Linked List is Empty...";
			}
			else{
				
			
				Node*ptr = head;
				while(ptr!=NULL){
				
						cout<<"\n\n Roll NO. : "<<ptr -> roll_no;
						cout<<"\n\n Name : "<<ptr -> name;
						cout<<"\n\n Marks : "<<ptr -> marks;
						cout<<"\n\n Per % : "<<ptr -> per;
						ptr = ptr -> next_add;
				}
			
			}
		}
};
main(){
	Linked_List obj;
	p:
	system("cls");	
	int choice;
	cout<<"\n \n 1. Insert Record";
	cout<<"\n \n 2. Search Record";
	cout<<"\n \n 3. Count Record";
	cout<<"\n \n 4. Update Record";
	cout<<"\n \n 5. Delete Record";
	cout<<"\n \n 6. Show All Record";
	cout<<"\n \n 7. Exit";
	cout<<"\n \n 8. Your Choice";
	cin>>choice;
	switch(choice){
		case 1:
			system("cls");
			obj.Insert();	
			break;
		
    	case 2:
			system("cls");
			obj.search();
			break;	
		case 3:
			system("cls");
			obj.Count();
			break;
		case 4:
			system("cls");
			obj.Update();
			break;
		case 5:
			system("cls");
			obj.Del();
			break;
		case 6:
			system("cls");
			obj.show();
			break;
		case 7:
		    exit(0);
		default:
		    cout<<"\n\n\n  Invalid Choice .... please try again";							
	}
	getch();
	goto p;
}
