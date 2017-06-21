

/******************************************************/
/* 链表的建立,插入,删除,查找,倒置,直接插入排序,选择排序  */
/******************************************************/

#include<windows.h>
#include "stdio.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 0
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;
/*创建一个带头结点含有n个结点的单链表*/
Linklist create(){
    Linklist L,p;
    int i;
    L=(Linklist)malloc(sizeof(LNode));
    L->next=NULL;
    printf("\nPlease input the count of node:");
    for(scanf("%d",&i);i>0;i--){
        p=(Linklist)malloc(sizeof(LNode));
        printf("Please input the data of node:");
        scanf("%d",&p->data);
        p->next=L->next;
        L->next=p;
    }
    return L;
}
/*显示个结点信息*/
void show(Linklist L){
    Linklist p;
    p=L->next;
    while(p){
        printf("%-5d",p->data);
        p=p->next;
    }
    printf("\n");
}
/*链表倒置*/
void rebuid(Linklist L){
    Linklist p,q;
    p=L->next;
    L->next=NULL;
    while(p){
        q=p;
        p=p->next;
        q->next=L->next;
        L->next=q;
    }
}
/*链表的插入*/
void insert(Linklist L){
    Linklist p;
    p=(Linklist)malloc(sizeof(LNode));
    printf("Please input the data of node:");
    scanf("%d",&p->data);
    p->next=L->next;
    L->next=p;

}
/*查找并删除*/
int search(Linklist L,int n){
    Linklist p,q;
    q=L;
    p=L->next;
    while(p){
        if(p->data==n){
            /*删除*/
            q->next=p->next;
            free(p);
            return TRUE;
        }
        q=p;
        p=p->next;
    }
    return FALSE;
}
/*直接插入排序*/
void insertsort(Linklist L){
    Linklist p,q,r,t;
    p=L->next->next;
    t=L->next;  /*p为无序表开头*/
    while(p){
        q=L->next;
        r=L;
        while(q!=p){
            if(p->data<q->data){
                t->next=p->next;
                p->next=r->next;
                r->next=p;
                break;
            }
            r=q;     /*r跟随q*/
            q=q->next;
        }
        t=p;        /*t跟随p*/
        p=p->next;
    }

}
/*简单选择排序*/
void selectsort(Linklist L){
    int tmp;
    Linklist p,q,r;
    p=L->next;
    while(p){
        q=p->next;
        r=p;
        while(q){
            if(q->data<r->data){
                r=q;
            }
            q=q->next;
        }
        if(r!=p){
            tmp=r->data;
            r->data=p->data;
            p->data=tmp;
        }
        p=p->next;
    }

}
/*主函数*/
main(){
Linklist L=NULL;
    L=create();
    show(L);
    /*添加需要调用的函数*/
    system("pause");
}



