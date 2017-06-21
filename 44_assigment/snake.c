/*注释: hoodlum1980 */
#define N 200    /*蛇的最多节点数*/
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
/*按键扫描码*/
#define LEFT 0x4b00
#define RIGHT 0x4d00
#define DOWN 0x5000
#define UP 0x4800
#define ESC 0x011b
int i,key;
int score=0;
int gamespeed=32000; /*延时时长*/
struct Food /*食物，显示为绿色*/
{
    int x;
    int y;
    int isEaten;/*是否被蛇吃到*/
}food;

struct Snake /*蛇*/
{
    int x[N];/*保存了200个蛇身节点坐标*/
    int y[N];
    int node;/*标识蛇身的长度*/
    int direction;/*蛇前行方向*/
    int isDead;/*标识蛇是否已经死了*/
}snake;

void Init(void);
void Close(void);
void DrawK(void);
void GameOver(void);
void GamePlay();
void PrScore(void);

/*根据用户选择的快，中，慢决定延时时间*/
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

/*显示菜单！*/
Menu()
{
    char ch;
    printf("Please choose the gamespeed:\n");
    printf("1-Fast    2-Normal    3-slow\n");
    printf("\nPlease Press The numbers..\n");
    do{ch=getch();} while(ch!='1'&&ch!='2'&&ch!='3');
    /*清屏*/
    clrscr();
    return (ch);
}

void main(void)
{
    int ch;
    ch=Menu();/*显示主菜单，要求用户选择速度*/
    Init();/*初始化图形模式*/
    DrawK();/*绘制墙壁*/
    GamePlay(ch);/*开始玩游戏*/
    Close();/*退出图形模式*/
}

void Init(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc");
    cleardevice();
}

/*draw the outer rect border 绘制边框*/
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
    snake.direction=1;/*初始方向向右移动*/
    snake.x[0]=100;snake.y[0]=100;/*蛇头的初始位置，每个蛇身节点是10*10方格*/
    snake.x[1]=110;snake.y[1]=100;
    snake.node=2;/*蛇头只有2个方块*/
    PrScore();
    while(1)
    {
        while(!kbhit())
        {
            if(food.isEaten==1)
            {
                food.x=(rand()%400+60)/10*10;
                food.y=(rand()%350+60)/10*10;
                food.isEaten=0;/*蛇现在没有吃到事物的过程中*/
            }
            if(food.isEaten==0) /*绘制事物，用绿色方块表示*/
            {
                setcolor(GREEN);
                rectangle(food.x,food.y,food.x+10,food.y-10);
            }
            /*更新蛇的每一节的坐标，依次把前一节付给下一节移动坐标*/
            for(i=snake.node-1;i>0;i--)
            {
                snake.x[i]=snake.x[i-1];
                snake.y[i]=snake.y[i-1];
            }

            switch(snake.direction)
            {
                case 1: snake.x[0]+=10;break;/*向右*/
                case 2: snake.x[0]-=10;break;/*向左*/
                case 3: snake.y[0]-=10;break;/*向上*/
                case 4: snake.y[0]+=10;break;/*向下*/
            }
            /*遍历一次蛇身，判断游戏是否结束*/
            for(i=3;i<snake.node;i++)
            {
                /*遍历一次蛇身，判断蛇头是否撞到自己身体*/
                if(snake.x[i]==snake.x[0]&&snake.y[i]==snake.y[0])
                {
                    GameOver();
                    snake.isDead=1;
                    break;
                }
            }

            /*判断蛇头是否撞到墙壁*/
            if(snake.x[0]<55||snake.x[0]>595||snake.y[0]<55||snake.y[0]>455)
            {
                GameOver();
                snake.isDead=1;
            }
            if(snake.isDead)
                break;
            /*判断蛇头是否吃到了事物*/
            if(snake.x[0]==food.x&&snake.y[0]==food.y)
            {
                setcolor(BLACK);
                rectangle(food.x,food.y,food.x+10,food.y-10);
                snake.x[snake.node]=-20;snake.y[snake.node]=-20;/*设置蛇尾*/
                snake.node++;/*蛇身长度增加1*/
                food.isEaten=1;/*吃到了事物！*/
                score+=10; /*加分*/
                PrScore();/*打印分数*/
            }
            /*绘制蛇身*/
            setcolor(4);
            for(i=0;i<snake.node;i++)
                rectangle(snake.x[i],snake.y[i],snake.x[i]+10,snake.y[i]-10);
            delay(gamespeed);
            DElAY(ch);
            /*擦除蛇尾！*/
            setcolor(BLACK);/*0：BLACK*/
                rectangle(snake.x[snake.node-1],snake.y[snake.node-1],snake.x[snake.node-1]+10,snake.y[snake.node-1]-10);
        } /*endwhile（！kbhit）*/

        /*蛇已经死了~*/
        if(snake.isDead)
            break;
        /*蛇没死，则查询按键，刚才已经有键按下了*/
        key=bioskey(0);
        if(key==ESC)
            break;
        else if(key==UP&&snake.direction!=4) /*按了向上键，如果蛇正在向下运动，则忽略！*/
            snake.direction=3;/*向上*/
        else if(key==RIGHT&&snake.direction!=2)/*按了向右键，如果蛇正在向左运动，则忽略！*/
            snake.direction=1;/*向右*/
        else if(key==LEFT&&snake.direction!=1)/*按了向左键，如果蛇正在向右运动，则忽略！*/
            snake.direction=2;/*向左*/
        else if(key==DOWN&&snake.direction!=3)/*按了向下键，如果蛇正在向上运动，则忽略！*/
            snake.direction=4;/*向下*/
    }/*endwhile(1)*/
}

/*游戏结束*/
void GameOver(void)
{
    cleardevice();
    PrScore();/*打印分数*/
    setcolor(RED);
    settextstyle(0,0,4);
    outtextxy(200,200,"GAME OVER");
    getch();
}

/*打印分数*/
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

/*退出图形模式*/
void Close(void)
{
    getch();
    closegraph();
}
