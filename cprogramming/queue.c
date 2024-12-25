#include<stdio.h>
#define size 5

void enqueue(int);
void dequeue();
void display();

int arr[size],front=-1,rear=-1,;

int main(){

}

void enqueue(int value){
    if(rear==size-1){
        printf("\n The array is full");
    }
    else{
        if(front==-1){
            front=0;
            rear++;
            arr[rear]=value;
            printf("The insert value is -> %d", value);
        }
    }
}
void dequeue(){
    if(front==-1){
        printf("\n queue is empty");
        
    }
}