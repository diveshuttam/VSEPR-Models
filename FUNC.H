// Author:- Divesh Uttamchandani
// Class :-XI-A
// Session 2013-14


//////////////////////////Declaration Of functions//////////////////////////

// To convert an alphabet given (ch) to uppercase
char toupper(char ch);

// to take an element (ele[]), the array of group in which to search (group[][3])
// and no of elements in the array of groups (no_of_ele)
// search of the ele in the group.
// returns 1 if element is found in the (group[][3])
// returns 0 in case ele is not found
int search_ele(char ele[],char group[][3],int no_of_ele);

// to handle the exeption of compounds of hydrogen and group 2
// the function modifies the values of the globle variables declared in main
// namely f_hydrogen f_group2  no_of_hydrogen and f_othergroup
void check_exeption(char ele[],int sub_script);

// contains arrays of all the elements in groups based on no of electrons
// searches the ele (M[]) group by group and returns group no.
// returns zero if ele is not found in any of the group
int element_group(char M[]);

// func to calulate the total no. of electrons of the compound
// it modifies the globle variable (electrons) from main.cpp
// it adds electrons ele by ele by getting its group no and subscript
void no_of_electrons(int group_no,int sub_script);

// it calculates the no of bond pairs and lone pairs of a compound
// by recieving total electrons. It stores them in the variables called by
// reference that are (bond_pair) & (lone_pair)
void lone_pair__bond_pair(int tot_electrons,int &bond_pair,int &lone_pair);

// it prints the shape of the molecule in words by using the parameters
void shape_of_molecuole(int steric_no,int bond_pair,int lone_pair);

// it prints the hybridization in words using (steric_no)
void hybridization(int steric_no);


/////////////////////////Defination Of Functions/////////////////////////
char toupper(char ch)
{
if(ch>='a' && ch<='z')
ch-=32;
return ch;
}

int search_ele(char ele[],char group[][3],int no_of_ele)
{
    int i,flag=0;
    for(i=0;i<no_of_ele;i++)
    if(strcmpi(ele,group[i])==0)
	flag=1;
    return flag;
}

void check_exeption(char ele[],int sub_script)
{
    int f=0;
    //check hydrogen
    if(strcmpi(ele,"H")==0)
    {
    f=1;
    f_hydrogen=1;
    no_of_hydrogen+=sub_script;
    }
    //check group2
    if(f==0)
    {
	char group[][3]={"Li","Be","B","C","N","O","F","Ne","S"};
	if(search_ele(ele,group,9)==1)
	{
	    f=1;
	    f_group2=1;
	}
    }
    //else other group
    if(f==0)
    {
    f_othergroup=1;
    }
}
int element_group(char M[])
{
    //groups on the basis of valence electrons
    char group1[][3]={"H","Li","Na","K","Rb","Cs","Fr"};
    char group2[][3]={"Be","Mg","Ca","Sc","Ba","Ra","He"};
    char group3[][3]={"Sc","Y","La","Ac"};
    char group4[][3]={"Ti","Zr","Hf"};
    char group5[][3]={"V","Nb","Ta"};
    char group6[][3]={"Cr","Mo","W"};
    char group7[][3]={"Mn","Tc","Re"};
    char group8[][3]={"Fe","Ru","Os"};
    char group9[][3]={"Co","Rh","Ir"};
    char group10[][3]={"Ni","Pd","Pt"};
    char group11[][3]={"Cu","Ag","Au"};
    char group12[][3]={"Zn","Cd","Hg"};
    char group13[][3]={"B","Al","Ga","In","Tl"};
    char group14[][3]={"C","Si","Ge","Sn","Pb"};
    char group15[][3]={"N","P","As","Sb","Bi"};
    char group16[][3]={"O","S","Se","Te","Po"};
    char group17[][3]={"F","Cl","Br","I","At"};
    char group18[][3]={"Ne","Ar","Kr","Xe","Rn"};

    if(search_ele(M,group1,7))
    return 1;
   else
    if(search_ele(M,group2,7))
    return 2;
   else
    if(search_ele(M,group3,4))
    return 3;
   else
    if(search_ele(M,group4,3))
    return 4;
   else
    if(search_ele(M,group5,3))
    return 5;
   else
    if(search_ele(M,group6,3))
    return 6;
   else
    if(search_ele(M,group7,3))
    return 7;
   else
    if(search_ele(M,group8,3))
    return 8;
   else
    if(search_ele(M,group9,3))
    return 9;
   else
    if(search_ele(M,group10,3))
    return 10;
   else
    if(search_ele(M,group11,3))
    return 11;
   else
    if(search_ele(M,group12,3))
    return 12;
   else
    if(search_ele(M,group13,5))
    return 13;
   else
    if(search_ele(M,group14,5))
    return 14;
   else
    if(search_ele(M,group15,5))
    return 15;
   else
    if(search_ele(M,group16,5))
    return 16;
   else
    if(search_ele(M,group17,5))
    return 17;
   else
    if(search_ele(M,group18,5))
    return 18;
   else
    return 0;

}

void no_of_electrons(int group_no,int sub_script)
{
    electrons=electrons+(group_no%10)*(sub_script);
}

void lone_pair__bond_pair(int tot_electrons,int &bond_pair,int &lone_pair)
{
    if(tot_electrons%2==0)
    {
    int e;
    if(tot_electrons<=56)
        if(tot_electrons<=8)
            e=2;
        else
            e=8;
    else
        e=18;
	{
	    bond_pair=tot_electrons/e;
	    lone_pair=(tot_electrons%e)/2;
	}
    }

    else
        {
        f_outofscope=1;
        f_oddelectron=1;
        }
}
void hybridization(int steric_no)
{
    switch(steric_no)
    {
    case 2:
	cout<<"sp";
	break;
    case 3:
	cout<<"sp2";
	break;
    case 4:
	cout<<"sp3";
	break;
    case 5:
	cout<<"sp3d";
	break;
    case 6:
	cout<<"sp3d2";
	break;
    case 7:
	cout<<"sp3d3";
	break;
	default:f_outofscope=1;
            f_stericno=1;
    }
}
void shape_of_molecuole(int steric_no,int bond_pair,int lone_pair)
{
    switch(steric_no)
    {
    case 2:
	cout<<"Linear";
	break;
    case 3:
	{
	if(bond_pair==3 && lone_pair==0)
	cout<<"Trigonal Planer";
	if(bond_pair==2 && lone_pair==1)
	cout<<"Bent V Shape";
	break;
	}
    case 4:
	{
	if(bond_pair==4 && lone_pair==0)
	cout<<"Tetrahedral";
	if(bond_pair==3 && lone_pair==1)
	cout<<"Trigonal Pyramidal";
	if(bond_pair==2 && lone_pair==2)
	cout<<"Bent V Shape";
	break;
	}
    case 5:
	{
	if(bond_pair==5 && lone_pair==0)
	cout<<"Trigonal Bipyramidal";
	if(bond_pair==4 && lone_pair==1)
	cout<<"Sea Saw";
	if(bond_pair==3 && lone_pair==2)
	cout<<"Arrow Shape OR T Shape";
	if(bond_pair==2 && lone_pair==3)
	cout<<"Linear";
	break;
	}
    case 6:
	{
	if(bond_pair==6 && lone_pair==0)
	cout<<"Square Bipyramidal";
	if(bond_pair==5 && lone_pair==1)
	cout<<"Square Pyramidal";
	if(bond_pair==4 && lone_pair==2)
	cout<<"Square Planer";
	break;
	}
    case 7:
	{
	if(bond_pair==7 && lone_pair==0)
	cout<<"Pentagonal Bipyramidal";
	if(bond_pair==6 && lone_pair==1)
	cout<<"Caped OR Distorted Octahedron";
	break;
	}
	default:f_outofscope=1;
    }
}
