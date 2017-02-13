void intro();
void erase_name();
/////////////////////////////////////////////////////////////////////
void main_menu(int &choice);
    void print_menu();
    int get_choice();
/////////////////////////////////////////////////////////////////////
void about();
/////////////////////////////////////////////////////////////////////
void end();
/////////////////////////////////////////////////////////////////////

/*******************************************************************/
void intro()
{
   graphics_initialize();
   int x = xmax;
   int y = ymax;
   int i,j;

   for(i=x, j=0; i>120; i--,j++)
   {
    delay(20);

    erasercolor;
    bar(x,y,0,0);

    topicstyle;
    topiccolor;
    outtextxy(i,10,"Shapes Of Molecules");

    if(j<=200)
     {
      namestyle;
      namecolor_intro;
      outtextxy(j,350,"Made By :-Divesh Uttamchandani");
      outtextxy(j,400,"Class     :-XI -A");

      th_style;
      outtextxy(j+175,397,"th");
     }

    if(j>=200)
    {
    y=80;
    }

    if(kbhit()!=0)
    {
	 if(getch()==13)
		 break;
	 else
		 getch();
    }
}
   cleardevice();
   topicstyle;
   topiccolor;
   outtextxy(120,10,"Shapes Of Molecules");


   namestyle;
   namecolor_intro;
   outtextxy(200,350,"Made By :-Divesh Uttamchandani");
   outtextxy(200,400,"Class     :-XI -A");

   th_style;
   outtextxy(200+175,397,"th");
   delay(500);
}

void erase_name()
{
	delay(500);
   //graphics initialized in intro
   erasercolor;
   for(int i=195;i<=xmax;i++)
   {
   bar(0,300,i,ymax);
   delay(5);
   }
   cleardevice();
   //closegraph(); transfered to main menu
}

void main_menu(int &choice)
{
   if(no_of_times>=1)
   graphics_initialize();

   topicstyle;
   topiccolor;
   outtextxy(120,10,"Shapes Of Molecules");

   print_menu();

   choice=get_choice();

   cleardevice();
   closegraph();
}

void print_menu()
{
int flag=0;

if(flag==0)
    {
	for(int i=0;i<=500;i++)
	{
	    if(kbhit()==1)
	    {
		getch();
		flag=1;
		break;
	    }
	    else
		delay(1);
	}
    }

mainmenustyle;
mainmenucolor;
outtextxy(250,140,"Main Menu");

if(flag==0)
    {
	for(int i=0;i<700;i++)
	{
	    if(kbhit()!=0)
	    {
		getch();
		flag=1;
		break;
	    }
	    else
		delay(1);
	}
    }

optionsstyle;
optionscolor;

outtextxy(210,200,"1) About The Program");

if(flag==0)
    {
	for(int i=0;i<700;i++)
	{
	    if(kbhit()!=0)
	    {
		getch();
		flag=1;
		break;
	    }
	    else
		delay(1);
	}
    }

outtextxy(210,240,"2) Run The Program");

if(flag==0)
    {
	for(int i=0;i<700;i++)
	{
	    if(kbhit()!=0)
	    {
		getch();
		flag=1;
		break;
	    }
	    else
		delay(1);
	}
    }
outtextxy(210,280,"3) Exit");
}

int get_choice()
{
delay(100);
int choice=1;
int y1=200;
int y2=237;
int ch=0;

do
{
if(y1<200)
y1+=40,y2+=40,choice++;

if(y1>280)
y1-=40,y2-=40,choice--;

choiceboxcolor;
rectangle(200,y1,440,y2);

ch=getch();

switch(ch)
	{
	case 72:
	    erasercolor;
		rectangle(200,y1,440,y2);
		y1-=40;
		y2-=40;
		choice--;
		break;

	case 80:
	    erasercolor;
		rectangle(200,y1,440,y2);
		y1+=40;
		y2+=40;
		choice++;
		break;
	}
}while(ch!=13);

return choice;
}

void about()
{
graphics_initialize();
cleardevice();

abtstyle_topic;
abtcolor_topic;

delay(300);
outtextxy(120,10,"Shapes Of Molecules");
delay(500);

abtstyle_body;
abtcolor_body;

delay(300);
outtextxy(10,90,"a");

delay(300);
outtextxy(10,125,"b");

delay(300);
outtextxy(10,160,"c");

delay(300);
outtextxy(10,195,"d");

delay(300);
outtextxy(10,230,"e");

delay(300);
outtextxy(10,265,"f");

delay(300);
outtextxy(10,300,"g");

delay(300);
outtextxy(10,335,"h");

delay(300);
outtextxy(10,370,"i");

delay(300);
outtextxy(10,405,"j");


getch();
cleardevice();
closegraph();
}

void end()
{
   graphics_initialize();

   int x = xmax;
   int y = ymax;

   int i,j;

   for(i=x, j=0; i>210; i--,j++)
   {
    delay(20);

    erasercolor;
    bar(x,y,0,0);

    thanksstyle;
    thankscolor;
    outtextxy(i,100,"Thank You");

    if(j<=100)
     {
      namestyle;
      namecolor_end;
      outtextxy(j,350,"Made By :-Divesh Uttamchandani");
      outtextxy(j,400,"Class     :-XI -A");

      th_style;
      outtextxy(j+175,397,"th");
     }

    if(j>=100)
    {
    y=250;
    }

    if(kbhit()!=0)
    {
	 if(getch()==13)
		 break;
	 else
		 getch();
    }
}
   cleardevice();
   thanksstyle;
   thankscolor;
   outtextxy(210,100,"Thank You");


   namestyle;
   namecolor_end;
   outtextxy(100,350,"Made By :-Divesh Uttamchandani");
   outtextxy(100,400,"Class     :-XI -A");

   th_style;
   outtextxy(100+175,397,"th");
   /* clean up */
   for(i=0;i<3000;i++)
   {
   if( !(kbhit()) )
	delay(1);
   else
	break;
   }

   cleardevice();
   closegraph();
   exit(0);
}
