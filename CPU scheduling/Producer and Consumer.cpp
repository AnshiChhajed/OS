#include<iostream>
using namespace std;
int s=1,full=0,empty=10,i=0;
int wait(int s){
return (--s);
}

int signal(int s){
return(++s);
}
void producer(){
s=wait(s);
full=signal(full);
empty=wait(empty);
i++;
cout<<"\nProducer produces the item x";
s=signal(s);
}
void consumer(){
s=wait(s);
full=wait(full);
empty=signal(empty);
cout<<"\nConsumer consumes item x";
i--;
s=signal(s);
}
void producer();
void consumer();
int wait(int);
int signal(int);
int main(){
int n;
cout<<"\n1.Producer\n2.Consumer\n3.Exit";
do{
cout<<"\nEnter your choice:";
cin>>n;
switch(n){
case 1: if((s==1)&&(empty!=0)){

        producer();
        }
        else{
            cout<<"Buffer is full!";
    }

case 2: if((s==1)&&(full!=0)){
            consumer();}
        else{
            cout<<"Buffer is empty!";
    }

}
}while(n!=3);

}