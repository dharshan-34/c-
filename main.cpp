#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            data=val;
            next=nullptr;}};
class StackLinkedList{
    private:
        Node *top;
    public:
        StackLinkedList(){
            top=nullptr;
        }
        void push(int val){
            Node* newNode=new Node(val);
            newNode->next=top;
            top=newNode;}
        void pop(){
            if(top==nullptr){
                cout<<"Stack underflow";return;
            }
            Node *temp=top;
            top=top->next;
            delete(temp);}
        void peek(){
            cout<<top->data<<endl;
        }
        void isEmpty(){
            if(top==nullptr)
                cout<<"Yes";
            else
                cout<<"No";
        }void display(){
            Node *temp=top;
            while(temp!=nullptr){
                cout<<temp->data<<"->";
                temp=temp->next;//4k->3k->2k->1k
            }//temp=1000 
            cout<<"NULL";
        }
};
int main(){
    StackLinkedList st;
    st.isEmpty();//Yes
    st.push(10);//1000
    st.push(20);
    st.push(30);st.push(40);//LI
    st.isEmpty();//No
    st.peek();//40
    st.display();//40->30->20->10->NULL
    st.pop();cout<<endl;//FO
    st.display();//30->20->10->NULL;
}