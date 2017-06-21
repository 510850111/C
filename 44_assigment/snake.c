/*ע��: hoodlum1980 */
#define N 200    /*�ߵ����ڵ���*/
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
/*����ɨ����*/
#define LEFT 0x4b00
#define RIGHT 0x4d00
#define DOWN 0x5000
#define UP 0x4800
#define ESC 0x011b
int i,key;
int score=0;
int gamespeed=32000; /*��ʱʱ��*/
struct Food /*ʳ���ʾΪ��ɫ*/
{
    int x;
    int y;
    int isEaten;/*�Ƿ��߳Ե�*/
}food;

struct Snake /*��*/
{
    int x[N];/*������200������ڵ�����*/
    int y[N];
    int node;/*��ʶ����ĳ���*/
    int direction;/*��ǰ�з���*/
    int isDead;/*��ʶ���Ƿ��Ѿ�����*/
}snake;

void Init(void);
void Close(void);
void DrawK(void);
void GameOver(void);
void GamePlay();
void PrScore(void);

/*�����û�ѡ��Ŀ죬�У���������ʱʱ��*/
DElAY(char ch)
{
    if(ch=='3')
  {
      delay(gamespeed);
       delay(gamespeed);
  }
    else if(ch=='2')
    {
        delay(gamespeed);
  }
}

/*��ʾ�˵���*/
Menu()
{
    char ch;
    printf("Please choose the gamespeed:\n");
    printf("1-Fast    2-Normal    3-slow\n");
    printf("\nPlease Press The numbers..\n");
    do{ch=getch();} while(ch!='1'&&ch!='2'&&ch!='3');
    /*����*/
    clrscr();
    return (ch);
}

void main(void)
{
    int ch;
    ch=Menu();/*��ʾ���˵���Ҫ���û�ѡ���ٶ�*/
    Init();/*��ʼ��ͼ��ģʽ*/
    DrawK();/*����ǽ��*/
    GamePlay(ch);/*��ʼ����Ϸ*/
    Close();/*�˳�ͼ��ģʽ*/
}

void Init(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc");
    cleardevice();
}

/*draw the outer rect border ���Ʊ߿�*/
void DrawK(void)
{
    /*setbkcolor(LIGHTGREEN);*/
    setcolor(11);
    setlinestyle(SOLID_LINE,0,THICK_WIDTH);
    for(i=50;i<=600;i+=10)
    {
        rectangle(i,40,i+10,49);
        rectangle(i,451,i+10,460);
    }
    for(i=40;i<=450;i+=10)
    {
        rectangle(50,i,59,i+10);
        rectangle(601,i,610,i+10);
    }
}

void GamePlay(char ch)
{
    randomize();
    food.isEaten=1;
    snake.isDead=0;
    snake.direction=1;/*��ʼ���������ƶ�*/
    snake.x[0]=100;snake.y[0]=100;/*��ͷ�ĳ�ʼλ�ã�ÿ������ڵ���10*10����*/
    snake.x[1]=110;snake.y[1]=100;
    snake.node=2;/*��ͷֻ��2������*/
    PrScore();
    while(1)
    {
        while(!kbhit())
        {
            if(food.isEaten==1)
            {
                food.x=(rand()%400+60)/10*10;
                food.y=(rand()%350+60)/10*10;
                food.isEaten=0;/*������û�гԵ�����Ĺ�����*/
            }
            if(food.isEaten==0) /*�����������ɫ�����ʾ*/
            {
                setcolor(GREEN);
                rectangle(food.x,food.y,food.x+10,food.y-10);
            }
            /*�����ߵ�ÿһ�ڵ����꣬���ΰ�ǰһ�ڸ�����һ���ƶ�����*/
            for(i=snake.node-1;i>0;i--)
            {
                snake.x[i]=snake.x[i-1];
                snake.y[i]=snake.y[i-1];
            }

            switch(snake.direction)
            {
                case 1: snake.x[0]+=10;break;/*����*/
                case 2: snake.x[0]-=10;break;/*����*/
                case 3: snake.y[0]-=10;break;/*����*/
                case 4: snake.y[0]+=10;break;/*����*/
            }
            /*����һ�������ж���Ϸ�Ƿ����*/
            for(i=3;i<snake.node;i++)
            {
                /*����һ�������ж���ͷ�Ƿ�ײ���Լ�����*/
                if(snake.x[i]==snake.x[0]&&snake.y[i]==snake.y[0])
                {
                    GameOver();
                    snake.isDead=1;
                    break;
                }
            }

            /*�ж���ͷ�Ƿ�ײ��ǽ��*/
            if(snake.x[0]<55||snake.x[0]>595||snake.y[0]<55||snake.y[0]>455)
            {
                GameOver();
                snake.isDead=1;
            }
            if(snake.isDead)
                break;
            /*�ж���ͷ�Ƿ�Ե�������*/
            if(snake.x[0]==food.x&&snake.y[0]==food.y)
            {
                setcolor(BLACK);
                rectangle(food.x,food.y,food.x+10,food.y-10);
                snake.x[snake.node]=-20;snake.y[snake.node]=-20;/*������β*/
                snake.node++;/*����������1*/
                food.isEaten=1;/*�Ե������*/
                score+=10; /*�ӷ�*/
                PrScore();/*��ӡ����*/
            }
            /*��������*/
            setcolor(4);
            for(i=0;i<snake.node;i++)
                rectangle(snake.x[i],snake.y[i],snake.x[i]+10,snake.y[i]-10);
            delay(gamespeed);
            DElAY(ch);
            /*������β��*/
            setcolor(BLACK);/*0��BLACK*/
                rectangle(snake.x[snake.node-1],snake.y[snake.node-1],snake.x[snake.node-1]+10,snake.y[snake.node-1]-10);
        } /*endwhile����kbhit��*/

        /*���Ѿ�����~*/
        if(snake.isDead)
            break;
        /*��û�������ѯ�������ղ��Ѿ��м�������*/
        key=bioskey(0);
        if(key==ESC)
            break;
        else if(key==UP&&snake.direction!=4) /*�������ϼ�����������������˶�������ԣ�*/
            snake.direction=3;/*����*/
        else if(key==RIGHT&&snake.direction!=2)/*�������Ҽ�����������������˶�������ԣ�*/
            snake.direction=1;/*����*/
        else if(key==LEFT&&snake.direction!=1)/*�������������������������˶�������ԣ�*/
            snake.direction=2;/*����*/
        else if(key==DOWN&&snake.direction!=3)/*�������¼�����������������˶�������ԣ�*/
            snake.direction=4;/*����*/
    }/*endwhile(1)*/
}

/*��Ϸ����*/
void GameOver(void)
{
    cleardevice();
    PrScore();/*��ӡ����*/
    setcolor(RED);
    settextstyle(0,0,4);
    outtextxy(200,200,"GAME OVER");
    getch();
}

/*��ӡ����*/
void PrScore(void)
{
    char str[10];
    setfillstyle(SOLID_FILL,YELLOW);
    bar(50,15,220,35);
    setcolor(6);
    /*settextstyle(int font, int direction, int charsize)*/
    settextstyle(0,0,2);
    sprintf(str,"score:%d",score);
    outtextxy(55,20,str);
}

/*�˳�ͼ��ģʽ*/
void Close(void)
{
    getch();
    closegraph();
}
