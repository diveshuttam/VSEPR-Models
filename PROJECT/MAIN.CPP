/**************Program To Find Shape a Compound Using VSEPER***************
****************         By-      Divesh Uttamchandani     ****************
****************         Class-   XI A                     ****************
****************         Session- 2013-2014                ****************
**************************************************************************/


/***************Give graphics/bgi and header file path here***************/
#define bgi_loc    	    "g:/bgi"
#define functions  	    "g:/bin/prjf/func.h"
#define shape      	    "g:/bin/prjf/shapes.h"
#define my_graphics	    "g:/bin/prjf/graph.h"
#define fonts_styles    "g:/bin/prjf/styles.h"
/*************************************************************************/


///////////////////////variables to handle exeptions///////////////////////
int f_exeption,f_hydrogen,f_group2,f_othergroup,no_of_hydrogen;
int f_outofscope,f_oddelectron,f_stericno;
int f_subscript;
int no_of_times=0;
///////////////////////////////////////////////////////////////////////////


/////////////////////variable to calculate electrons///////////////////////
int electrons;
///////////////////////////////////////////////////////////////////////////


/************************Including Header Files***************************/
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <process.h>
#include <graphics.h>
#include <dos.h>
#include functions
#include fonts_styles
#include shape
#include my_graphics
/*************************************************************************/



/*******************************  main  *********************************/
void main()
{
intro();	// introduction- animation for topic my name...
erase_name();   //erases the name for the menu to be printed

do
{

int choice=0;

main_menu(choice); //returns the choice entered by user in the given variable
		   //1) About The Program
		   //2) Run The Program
		   //3) Exit
if(choice==1)
    about(); // prints about the program

if(choice==2)   // run the entire program
    {
    txtbkcolor; //background color
    msgcolor;   //printing color
    clrscr();

    ///////////////declaration and modification of variables////////////
    int no_of_elements=0,i=0,group=0,sub_script=0;
    int bond_pairs=0,lone_pairs=0,steric_no=0,charge=0;
    char ele[3];
    electrons=0;

    f_exeption=0,f_hydrogen=0,f_group2=0,f_othergroup=0,no_of_hydrogen=0;
    f_outofscope=0,f_oddelectron=0,f_stericno=0,f_subscript=0;
    ////////////////////////////////////////////////////////////////////
    do
    {
	msgcolor;
	clrscr();
	cout<<"\n\t   A Program To Find Shape Of A Compound On Basis Of VSEPR";

	cout<<"\n\n\nEnter Number Of Elements In Your Compound\t";
	iocolor;
	cin>>no_of_elements;

	if(no_of_elements<=0)
		{
		errcolor;
		cout<<"\nInvalid!";
		cout<<"\nPress Any Key To Enter Again";
		getch();
		}
    }while(no_of_elements<1);

    //entering the given no. of elements
    for(i=1;i<=no_of_elements;i++)
    {
	msgcolor;
	cout<<"\nEnter Element "<<i<<'\t';
	iocolor;
	cin>>ele;			   //enter ele one by one


	group=element_group(ele);	   //get the group & check validity


	if(group!=0)			   //if the element exists
	{

	  do          			   //untill get a valid subscript
	    {
		f_subscript=0;

		msgcolor;
		cout<<"Enter Subscript\t";
		iocolor;
		cin>>sub_script;

		if(sub_script>0)           //if valid subscript is entered
		{
		no_of_electrons(group,sub_script);
		check_exeption(ele,sub_script);
		}			   //checks the exeption

		else
		{
		f_subscript=1;		   //the subscript is invalid
		errcolor;
		cout<<"\nInvalid Subscript! Enter Again\n";
		}
	    }while(f_subscript==1);
	}

	else //if the element doesn't exist
	{
	errcolor;
	cout<<"\nSorry, The Element Wasn't Found";
	cout<<"\nPress \'Enter\' To Enter Again or Press Any Other Key To Exit";

	  if(getch()==13)// if user pressed enter
	  {
	  i--;
	  msgcolor;
	  clrscr();
	  }

	  else// if user didn't press enter
	  exit(0);
	}
    }


    //////////////////////entering the charge on the compound/////////////////
    msgcolor;
    cout<<"\nIf the compound has a charge Press (Y) \nElse press any other key";
    if(toupper(getch())=='Y')//if 'y' was pressed ==> the compound has charge
    {
    cout<<"\nEnter Charge\t";
    iocolor;
    cin>>charge;
    }
    ////////////////////////////////////////////////////////////////////////////


    if(f_hydrogen==1 && f_group2==1 && f_othergroup==0) //checking exeption of
	f_exeption=1;					//Hydrogen


    electrons-=charge;  //add or sub electrons acc to charge
			//total electrons calculated


    lone_pair__bond_pair(electrons,bond_pairs,lone_pairs);//calculates bp and
    steric_no=bond_pairs+lone_pairs;                      //lp


    if(f_exeption==1)       //if exeption then modify things
    {
	bond_pairs=no_of_hydrogen;	//in case of Hydrogen & group 2 no.
					//of bp=no of h2
	lone_pairs=steric_no-no_of_hydrogen;
	}

    if(f_outofscope==0)     //if the compound in the scope the project
    {
	msgcolor;
	cout<<"\n\nNo Of Bond Pairs\t";
	iocolor;
	cout<<bond_pairs;     //print no of bp

	msgcolor;
	cout<<"\nNo Of Lone Pairs\t";
	iocolor;
	cout<<lone_pairs;	//print the no of lp

	msgcolor;
	cout<<"\nSteric Number\t\t";
	iocolor;
	cout<<steric_no;	//print the steric no.

	msgcolor;
	cout<<"\n\nHybridization Of The Given Compound (According To VBT) Is ";
	iocolor;
	cout<<"\'";
	hybridization(steric_no); //print the hybridization
	cout<<"\'";


	msgcolor;
	cout<<"\n\nShape Of The Given Compound Is ";
	iocolor;
	cout<<"\'";
	shape_of_molecuole(steric_no,bond_pairs,lone_pairs); //print shape in
	cout<<"\'";					     //words
	msgcolor;
	cout<<"\n\nPress Any Key To See The Shape....";	      getch();
	draw_shape(steric_no,bond_pairs,lone_pairs); //draw the required shape
    }
}

if(choice==3)
    break;	//goes to end & exits the program

if(f_outofscope==1) //compounds shape etc can not be found with VSEPR
		    //give proper msg to user
{
errcolor;
clrscr();
cout<<"\nSorry The Compound Is Out Of Scope Of This Project ";
if(f_oddelectron==1)
    cout<<"As It Contains An Odd\nElectron";
else
if(f_stericno==1)
    cout<<"As Its Shape Is too \nComplex i.e its steric no. goes beyond 7\n";
else
    cout<<";  Possibly It is Invalid.\n";
getch();
}
txtbkcolor;
msgcolor;
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t     Press Y to Continue "<<char(174)<<"-";
cout<<"\n\t\t\t Press Any Other Key To Exit -"<<char(175);  //char(26);
no_of_times++;
}while(toupper(getch())=='Y');
clrscr();

end();	// a note of thanks to the user
}
////////////////////////////////End Of Main////////////////////////////////
