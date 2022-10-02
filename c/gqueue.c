#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//defining generic queue 

typedef struct queue{
    int size,dsize,front,rear;
    void* data;
}gqueue;

//defining address
typedef struct add{
    char *street;
    char *city;
    char *zip;
    char *country;
}address;

//defining struct student
struct student{
    char *name;
    int roll;
    char *email;
    char *ph;
    address a1;
};
//function for creation of gqueue
gqueue* createGQueue(int queuesize, int dsize)
{
    gqueue* q1=NULL;
    q1=(gqueue*)malloc(sizeof(gqueue));
    q1->size=queuesize;
    q1->dsize=dsize;
    q1->front=-1;
    q1->rear=-1;
    q1->data=malloc(queuesize*dsize);
    return q1;
}
//function for enqueue
int enGqueue(gqueue *q, void *dp)
{
    if(q->rear==q->size-1)
    {
        return 0;
    }
    else
    {
        memcpy((void *)(q->data + q->dsize * q->rear++),dp,q->dsize);
        return 1;
    }
    
}
//function for dequeue
int deGqueue(gqueue *q, void *dp)
{
    if(q->front==q->rear)
    {
        return 0;
    }
    else
    {
        q->front++;
        memcpy(dp,(void *)(q->data + q->dsize*q->front),q->dsize);
        return 1;
    }
    
} 
//function to free queue
int freeGqueue(gqueue *q)
{
    if(q!=NULL)
    {
        free(q->data);
        return 1;
    }
    else
    {
        return 0;
    }
    
}

//function to check a queue is full or not

int isGqueueFull(gqueue *q)
{
    if(q==NULL)
    return 0;
    if(q->rear==q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

//function to check a queue is empty or not

int isGqueueEmpty(gqueue *q)
{
    if(q==NULL)
    return 0;
    if(q->front==q->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}


void main()
{
    gqueue *q;
    int d,ch,n;
    struct student s,s2;
    s.name="Misra,Devtanu";
    s.roll=9;
    s.email="devtanumisra@gmail.com";
    s.ph="9007462166";
    s.a1.street="Argori";
    s.a1.zip="711302";
    s.a1.city="Howrah";
    s.a1.country="India";

    //Create a queue
    q=createGQueue(10,sizeof(struct student));
    printf("A queue is created with size=%d\n",q->size);

    while(1)
    {
    
    printf("Enter corresponing number:-\n");
    printf("1:Enqueue\n2:Dequeue\n3:Full or not\n4:Empty or not\n5:Free\nany other key:Exit");
    scanf("%d",&ch);

    //Enqueue
    if(ch==1)
    {
    if(enGqueue(q,&s)==1)
    {
        printf("Item pushed successfully in the queue\n");
    }
    else
    {
        printf("Queue is full");
    }
    }
    //Dequeue
    else if(ch==2)
    {
    if(deGqueue(q,&s2)==0)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Item popped successfully from the queue\n");
    }
    }
    //Queue Full or Not
    else if(ch==3)
    {
    if(isGqueueFull(q)==1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Queue is not full or invalid\n");
    }
    }
    //Queue Empty or Not

    else if(ch==4)
    {
    if(isGqueueEmpty(q)==1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty or invalid\n");
    }
    }
    //Free the queue

    else if(ch==5)
    {
    if(freeGqueue(q)==1)
    {
        printf("Freed successfully\n");
    }
    else
    {
        printf("Not Successfull");
    }
    }
    else
    {
        break;
    }
    
    }
}