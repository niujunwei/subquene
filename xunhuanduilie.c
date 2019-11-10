#include <stdio.h> 
#define MAXLEN 10

typedef struct
{ int data[MAXLEN]; 
int front,rear; 
}csequeue;

csequeue q;

void IniQueue()
{ 
	q.front=q.rear=MAXLEN-1;
 }

void InQueue()
{ 
	int x; 
	printf("\n\t\t 输入一个入队的整数的数据 "); 
	scanf("%d",&x); 
	if(q.front==(q.rear+1) % MAXLEN){ 
		printf("\n\t\t 队满，不能入队！ \n");
		return ; 
	} 
	q.rear=(q.rear+1) % MAXLEN; 
	q.data[q.rear]=x; 
	printf("\n\t\t 入队成功! \n"); 
}

void Outsequeue()
{ 
	if(q.front==q.rear)
	{ 
		printf("\n\t\t 此队列为空！ "); 
		return ; 
}else{ 
		q.front=(q.front+1) % MAXLEN; 
		printf("\n\t\t 出队元素为：%d\n",q.data[q.front]); 
		return ; 
} 
}

void ShowQueue()
{ 
	int k=q.front; 
	if(k==q.rear){ printf("\n\t\t 此队列为空！\n"); 
	return ; 
	}

 printf("\n\t\t 此队列元素为：");

do{
	k=(k+1) % MAXLEN;
	printf("%4d",q.data[k]);
}while(k!=q.rear);

printf("\n");
}

int length()
{ 
	int k; 
	k=(q.rear-q.front+MAXLEN % MAXLEN); 
	return k; 
}

void main()
{ 
	int i=1; 
	int choice; 
	IniQueue(); 
	while(i)
	{ 
		printf("\n\t\t 循环队列 \n"); 
		printf(""); 
		printf("\n\t\t 1--进 队 \n"); 
		printf("\n\t\t 2--出 队 \n"); 
		printf("\n\t\t 3--显 示 \n"); 
		printf("\n\t\t 4--求队列长度 \n"); 
		printf("\n\t\t 0--返 回 \n"); 
		printf(""); 
		printf("\n\n\t\t 请选择菜单号："); 
		scanf("%d",&choice); 
		switch(choice)
		{ case 1: 
		InQueue(); 
		break; 
		case 2: 
			Outsequeue(); 
			break; 
		case 3: 
			ShowQueue(); 
			break; 
		case 4: 
			printf("\n\t\t 队列长度为：%d \n",length()); 
			break; 
		case 0: 
			break; 
}
 }
 }
