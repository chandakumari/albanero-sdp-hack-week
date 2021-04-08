#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};
void InsertAtEnd(node*&head,node*&tail,int data){
	if(head==NULL){
		head=tail=new node(data);
	}
	else{
		node*n=new node(data);
		tail->next=n;
		tail=n;
	}
}
node* reorderedList(node* head) {
	node*temp = head;
	while(temp!=NULL && temp->next!=NULL){
	swap(temp->data,temp->next->data);
	temp = temp->next->next;
}
return head;
}

void Print(node*head,int n){
    while(head && n>1){
        cout<<head->data<<"->";
        head=head->next;
        n--;
    }
    cout<<head->data<<endl;
}
int main(){
	node*head=NULL;
	node*tail=NULL;
	int n,no;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>no;
		InsertAtEnd(head,tail,no);
	}
	//Print(head,n);
	node*head1=reorderedList(head);
	Print(head1,n);
	return 0;

}