#include<iostream>
using namespace std;
class StackArray{
    int arr[10];
    int top;
    public:
        StackArray(){
            top=-1;//0
        }
        void push(int val){if(top==9){
            cout<<"Stack overflow";return;}
            arr[++top]=val;//arr[0]=10
        }
        void pop(){if(top==-1){
            cout<<"Stack underflow";return;}
            top--;
        }
        void isEmpty(){
            if(top==-1)
                cout<<"Yes";
            else
                cout<<"No";}
        void peek(){
            cout<<arr[top];}
        void display(){
            cout<<"Stack using array";
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<"->";
            }cout<<"NULL";
        }
        };
int main(){
    StackArray st;
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
