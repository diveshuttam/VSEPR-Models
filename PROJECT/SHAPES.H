// Defining Co-ordinates Of mid points  used in drawing the shape
#define xmax getmaxx()
#define ymax getmaxy()
#define midx xmax/2
#define midy ymax/2

/********************Declarations Of Functions***********************/

// the fuction initializes the graphics and sets the bkcolor
// as defined in main.cpp by macro bkcolor
void graphics_initialize();

// the following functions draw the diff. req. shapes
// they use the following macros from main.cpp
// txtstyle ,txtcolor, bondstyle, bondcolor & lpcolor for style & color

///////////////////////////////////////////////////////////////////////
void linear2();

void trigonalplaner3();
void bentvshape3();
void tetrahedral4();

void trigonalpyramidal4();
void bentvshape4();

void trigonalbipyramidal5();
void seasaw5();
void arrowshape_or_tshape5();
void linear5();

void squarebipyramidal6();
void squarepiramidal6();
void squareplaner6();

void pentagonalbipyramidal7();
void caped_or_distortedoctahedron7();
//////////////////////////////////////////////////////////////////////

// the func. uses (steric_no), (bond_pair) ,(lone_pair) to draw the shape
// using above functions
void draw_shape(int steric_no,int bond_pair,int lone_pair);


/********************Defination Of Functions***************************/

////////////////////////////////////////////////////////////////////////////
void graphics_initialize()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, bgi_loc);

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      cout<<"Graphics error: %s\n"<<grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();
      exit(1);
   }

   bkcolor;
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
void linear2()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx-100, midy, midx-15, midy);
   line(midx+15, midy, midx+100, midy);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx-120, midy-25, "B");
   outtextxy(midx+105, midy-25, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-30,midy+25,"Linear");

   /* clean up */
   getch();
   closegraph();
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
void trigonalplaner3()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx, midy-30, midx, midy-110);
   line(midx+15, midy, midx+95, midy+80);
   line(midx-15, midy, midx-95, midy+80);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-8, midy-35, "A");
   outtextxy(midx-7, midy-155, "B");
   outtextxy(midx+103, midy+65, "B");
   outtextxy(midx-115, midy+60, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-90,midy+130,"Trigonal Planer");

   /* clean up */
   getch();
   closegraph();
}

void bentvshape3()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx+12, midy-30, midx+82, midy+40);
   line(midx-15, midy-30, midx-85, midy+40);

   //draw lone pairs
   lpcolor;
   line(midx-10,midy-60,midx-8,midy-60);
   line(midx+6,midy-60,midx+4,midy-60);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-10, midy-65, "A");
   outtextxy(midx-100, midy+30, "B");
   outtextxy(midx+85, midy+30, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-83,midy+80,"Bent V Shape");

   /* clean up */
   getch();
   closegraph();
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
void tetrahedral4()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx, midy-55, midx, midy-130);
   line(midx+10, midy-20, midx+100, midy+30);
   line(midx-10, midy-20, midx-100, midy+30);
   line(midx, midy-20, midx-10, midy+40);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-8, midy-62, "A");
   outtextxy(midx-6, midy-170, "B");
   outtextxy(midx+107, midy+10, "B");
   outtextxy(midx-120, midy+10, "B");
   outtextxy(midx-18, midy+30, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-70,midy+95,"Tetrahedral");

   /* clean up */
   getch();
   closegraph();
}

void trigonalpyramidal4()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx+10, midy-30, midx+100, midy+20);
   line(midx-10, midy-30, midx-100, midy+20);
   line(midx, midy-30, midx-10, midy+30);

   //draw the lone pairs
   lpcolor;
   line(midx-7, midy-75, midx-5, midy-75);
   line(midx+7, midy-75, midx+5, midy-75);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-8, midy-72, "A");
   outtextxy(midx+107, midy, "B");
   outtextxy(midx-120, midy, "B");
   outtextxy(midx-18, midy+20, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-120,midy+85,"Trigonal Pyramidal");

   /* clean up */
   getch();
   closegraph();
}

void bentvshape4()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx+12, midy-30, midx+56, midy+40);
   line(midx-15, midy-30, midx-60, midy+40);

   //draw lone pairs
   lpcolor;
   line(midx-15,midy-50,midx-13,midy-50);
   line(midx-10,midy-57,midx-8,midy-57);
   line(midx+11,midy-50,midx+9,midy-50);
   line(midx+6,midy-57,midx+4,midy-57);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-10, midy-65, "A");
   outtextxy(midx-80, midy+30, "B");
   outtextxy(midx+65, midy+30, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-83,midy+80,"Bent V Shape");

   /* clean up */
   getch();
   closegraph();
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
void trigonalbipyramidal5()
{
  graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx+15, midy, midx+100, midy);
   line(midx, midy-15, midx, midy-90);
   line(midx, midy+15, midx, midy+90);
   line(midx-15, midy-10, midx-90, midy-47);
   line(midx-15, midy+10, midx-90, midy+47);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx+105, midy-25, "B");
   outtextxy(midx-7, midy-130, "B");
   outtextxy(midx-7, midy+85, "B");
   outtextxy(midx-108, midy+25, "B");
   outtextxy(midx-108, midy-75, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-140,midy+170,"Trigonal Bi-Pyramidal");

   /* clean up */
   getch();
   closegraph();
}
void seasaw5()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx-15, midy, midx-110, midy);
   line(midx+15, midy, midx+110, midy);
   line(midx-10, midy+15, midx-47, midy+80);
   line(midx+10, midy+15, midx+47, midy+80);

   //draw lone pairs
   lpcolor;
   line(midx-7, midy-25, midx-5, midy-25);
   line(midx+7, midy-25, midx+5, midy-25);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx-130, midy-22, "B");
   outtextxy(midx+115, midy-22, "B");
   outtextxy(midx+50, midy+72, "B");
   outtextxy(midx-60, midy+72, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-50,midy+150,"Sea Saw");

   /* clean up */
   getch();
   closegraph();
}
void arrowshape_or_tshape5()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx+15, midy, midx+100, midy);
   line(midx, midy-15, midx+15, midy-85);
   line(midx, midy+15, midx+15, midy+85);

   //draw lone pairs
   lpcolor;

   line(midx-15, midy-12, midx-13, midy-12);
   line(midx-20, midy-7, midx-18, midy-7);

   line(midx-15, midy+12, midx-13, midy+12);
   line(midx-20, midy+7, midx-18, midy+7);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx+105, midy-25, "B");
   outtextxy(midx+10, midy-125, "B");
   outtextxy(midx+10, midy+77, "B");


   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-170,midy+150,"T Shaped OR Arrow Shaped");

   /* clean up */
   getch();
   closegraph();
}
void linear5()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx, midy-110, midx, midy-25);
   line(midx, midy+5, midx, midy+90);

   //draw lone pairs
   lpcolor;
   line(midx+28,midy-15,midx+30,midy-15);
   line(midx+28,midy-7,midx+30,midy-7);

   line(midx-25,midy-25,midx-27,midy-25);
   line(midx-30,midy-20,midx-32,midy-20);

   line(midx-25,midy+5,midx-27,midy+5);
   line(midx-30,midy,midx-32,midy);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-8, midy-35, "A");
   outtextxy(midx-6, midy-150, "B");
   outtextxy(midx-6, midy+83, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-30,midy+120,"Linear");

   /* clean up */
   getch();
   closegraph();
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
void squarebipyramidal6()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx, midy-15, midx, midy-90);
   line(midx, midy+15, midx, midy+90);
   line(midx-15, midy-10, midx-90, midy-47);
   line(midx-15, midy+10, midx-90, midy+47);
   line(midx+15, midy-10, midx+90, midy-47);
   line(midx+15, midy+10, midx+90, midy+47);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx-7, midy-130, "B");
   outtextxy(midx-7, midy+85, "B");
   outtextxy(midx-108, midy+25, "B");
   outtextxy(midx-108, midy-75, "B");
   outtextxy(midx+100, midy+25, "B");
   outtextxy(midx+100, midy-75, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-130,midy+170,"Square Bi-Pyramidal");

   /* clean up */
   getch();
   closegraph();
}

void squarepiramidal6()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx, midy-15, midx, midy-90);
   line(midx-15, midy-10, midx-90, midy-47);
   line(midx-15, midy+10, midx-90, midy+47);
   line(midx+15, midy-10, midx+90, midy-47);
   line(midx+15, midy+10, midx+90, midy+47);

   //draw lone pairs
   lpcolor;
   line(midx+9, midy+20, midx+7, midy+20);
   line(midx-7, midy+20, midx-5, midy+20);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx-7, midy-130, "B");
   outtextxy(midx-108, midy+25, "B");
   outtextxy(midx-108, midy-75, "B");
   outtextxy(midx+100, midy+25, "B");
   outtextxy(midx+100, midy-75, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-110,midy+100,"Square Pyramidal");

   /* clean up */
   getch();
   closegraph();
}

void squareplaner6()
{
graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx-15, midy-10, midx-90, midy-47);
   line(midx-15, midy+10, midx-90, midy+47);
   line(midx+15, midy-10, midx+90, midy-47);
   line(midx+15, midy+10, midx+90, midy+47);

   //draw lone pairs
   lpcolor;

   line(midx+9, midy+20, midx+7, midy+20);
   line(midx-7, midy+20, midx-5, midy+20);

   line(midx+9, midy-20, midx+7, midy-20);
   line(midx-7, midy-20, midx-5, midy-20);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx-108, midy+25, "B");
   outtextxy(midx-108, midy-75, "B");
   outtextxy(midx+100, midy+25, "B");
   outtextxy(midx+100, midy-75, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-80,midy+100,"Square Planer");

   /* clean up */
   getch();
   closegraph();
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
void pentagonalbipyramidal7()
{
   graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx, midy-15, midx, midy-90);
   line(midx, midy+15, midx, midy+90);
   line(midx-15, midy-10, midx-90, midy-35);
   line(midx-15, midy+10, midx-90, midy+47);
   line(midx+15, midy-10, midx+90, midy-35);
   line(midx+15, midy+10, midx+90, midy+47);
   line(midx+7, midy-17, midx+25, midy-65);

   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx-7, midy-130, "B");
   outtextxy(midx-7, midy+85, "B");
   outtextxy(midx-108, midy+25, "B");
   outtextxy(midx-108, midy-75, "B");
   outtextxy(midx+100, midy+25, "B");
   outtextxy(midx+100, midy-75, "B");
   outtextxy(midx+30, midy-100, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-160,midy+170,"Pentagonal Bi-Pyramidal");

   /* clean up */
   getch();
   closegraph();
}

void caped_or_distortedoctahedron7()
{
  graphics_initialize();

   //draw the bonds
   bondstyle;
   bondcolor;
   line(midx, midy-15, midx, midy-90);
   line(midx, midy+15, midx, midy+90);
   line(midx-15, midy-10, midx-120, midy-50);
   line(midx-15, midy+10, midx-120, midy+50);
   line(midx+15, midy-10, midx+120, midy-50);
   line(midx+15, midy+10, midx+120, midy+50);

   //draw the lonepairs
   lpcolor;
   line(midx-5, midy-10, midx-7, midy-10);
   line(midx+7, midy-10, midx+9, midy-10);


   //mark the elements
   elestyle;
   elecolor;
   outtextxy(midx-7, midy-25, "A");
   outtextxy(midx-7, midy-130, "B");
   outtextxy(midx-7, midy+85, "B");
   outtextxy(midx-138, midy+25, "B");
   outtextxy(midx-138, midy-75, "B");
   outtextxy(midx+125, midy+25, "B");
   outtextxy(midx+125, midy-75, "B");

   //print the shape
   txtstyle;
   txtcolor;
   outtextxy(midx-200,midy+170,"Caped OR Distorted Octahedron");

   /* clean up */
   getch();
   closegraph();
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////
void draw_shape(int steric_no,int bond_pair,int lone_pair)
{
    switch(steric_no)
    {
    case 2:
	linear2();
	break;
    case 3:
	{
	if(bond_pair==3 && lone_pair==0)
	trigonalplaner3();
	if(bond_pair==2 && lone_pair==1)
	bentvshape3();
	break;
	}
    case 4:
	{
	if(bond_pair==4 && lone_pair==0)
	tetrahedral4();
	if(bond_pair==3 && lone_pair==1)
	trigonalpyramidal4();
	if(bond_pair==2 && lone_pair==2)
	bentvshape4();
	break;
	}
    case 5:
	{
	if(bond_pair==5 && lone_pair==0)
	trigonalbipyramidal5();
	if(bond_pair==4 && lone_pair==1)
	seasaw5();
	if(bond_pair==3 && lone_pair==2)
	arrowshape_or_tshape5();
	if(bond_pair==2 && lone_pair==3)
	linear5();
	break;
	}
    case 6:
	{
	if(bond_pair==6 && lone_pair==0)
	squarebipyramidal6();
	if(bond_pair==5 && lone_pair==1)
	squarepiramidal6();
	if(bond_pair==4 && lone_pair==2)
	squareplaner6();
	break;
	}
    case 7:
	{
	if(bond_pair==7 && lone_pair==0)
	pentagonalbipyramidal7();
	if(bond_pair==6 && lone_pair==1)
	caped_or_distortedoctahedron7();
	break;
	}
    }
}
////////////////////////////////////////////////////////////////////////////
