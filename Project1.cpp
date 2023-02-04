#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

ofstream Bill("Bill.txt");

char c,more;
string x;
string choose,choice;
string inter;
int total=0,tot;
int i=1;

char name[]={'C','R','E','A','T','E','D',' ','B','Y',' ','J','A','W','A','D',' ','S','O','O','M','R','O'};
string roll[]={"R","O","L","L"," ","N","U","M","B","E","R"," ","2","1","S","W","0","4","9"};
	
void Interface();
void registr();
void login();
void Balance();
void items();
class Shop
{
	string Section,Item1,Item2,Item3,Item4,Item5;
	
	public:
		
	void Item (string Section,string unit,int Quantity,int Price,string contact,string area,string city,string province,string address)
	{	
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\t*********** "<<Section<<" Section **********\n\n\n";
		cout<<"\n\n\t\t\t\tPlease Enter Quantity : ";
		cin>>Quantity;
		cout<<endl<<endl;
		cout<<"\t\t\t\tYou Have Purchased "<<Quantity<<" "<<unit<<" "<<Section<<endl<<endl;
		cout<<"\t\t\t\tYour Bill is "<<Price*Quantity<<" Rs."<<endl<<endl;
		tot=Price*Quantity;
		total+=tot;
		
		ofstream Bill("Bill.txt",ios::app);
        Bill<<setw(30)<<Section<<setw(30)<<Quantity<<setw(30)<<Price*Quantity<<endl;
        
        cin.get();
        
        labelgo:
		cout<<"\t\t\t\tDo you want to Shop More (y/n) : ";
		cin>>more;
		if(more=='y')
		{
			cout<<"\n\n\n\t\t\t\tThis Product Has been added to your Cart.";
			cin.get();
			cin.get();
			items();
		}
		else if (more=='n')
		{
			string s1;
			string save;
			system ("cls");
		
			cout<<"\n\n\n\t\t\t\tPlease Enter your following details.\n\n";
			
			cout<<"\t\t\t\tContact Number : ";
			getline(cin,contact);
			getline(cin,contact);
			cout<<endl<<endl;
			
			cout<<"\t\t\t\tArea : ";
			getline(cin,area);
			cout<<endl<<endl;
			
			cout<<"\t\t\t\tCity : ";
			getline(cin,city);
			cout<<endl<<endl;
			
			cout<<"\t\t\t\tProvince : ";
			getline(cin,province);
			cout<<endl<<endl;
			
			cout<<"\t\t\t\tAddress : ";
			getline(cin,address);
		
			
			cout<<endl<<endl;
			
			ofstream add;
			add.open("address.txt",ios::app);
	        add<<contact<<endl<<area<<endl<<city<<endl<<province<<endl<<address<<endl<<endl;
	        
	        cin.get();
	        cin.get();
        
			system("cls");
			
			cout<<"\n\n\n\t\t_____________________________________________________________________________\n";
			cout<<"      \t\t_____________________________________________________________________________\n\n";
			cout<<"      \t\t                               TOTAL BILL RECIEPT                            \n";
			cout<<"      \t\t_____________________________________________________________________________\n";
			cout<<"      \t\t_____________________________________________________________________________\n";
			cout<<"\n\n\n"<<setw(30)<<"Product"<<setw(30)<<"Quantity"<<setw(30)<<"Price\n\n";
			ifstream readBill("Bill.txt");
			while(readBill.good())
			{
			
			getline(readBill,s1);
			cout<<s1<<endl;
			}
			
			cout<<"\n    \t\t-----------------------------------------------------------------------------\n\n";
			cout<<"      \t\t\t            Total Amount =============> "<<total;
			
			cin.get();
			system("cls");
			cout<<"\n\n\n\n\n\t\t\t****************************************************************************************\n";
			cout<<"          \t\t****************************************************************************************\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**            Your Product Will be delivered to you within two days.                  **\n";
        	cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                     Payment will be Cash on Delivery.                              **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                   ********** Thankyou for Shopping **********                      **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                ********** Hope You Like our Service **********                     **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**           ********** Press any key to Terminate The program **********             **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t**                                                                                    **\n";
			cout<<"          \t\t****************************************************************************************\n";
			cout<<"          \t\t****************************************************************************************\n";
		}
		else
		{
			goto labelgo;
		} 
	}
	
	Shop(string section,string item1,string item2,string item3,string item4,string item5)
	{
		Section=section;
		Item1=item1;
		Item2=item2;
		Item3=item3;
		Item4=item4;
		Item5=item5;
	}
	
	void Catagory1(string catagory,string item1,string item2,string item3,string item4,string item5,int price1,int price2,int price3,int price4,int price5,string unit1,string unit2,string unit3,string unit4,string unit5)
	{
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t\t\t**********" <<catagory<<" Section**********\n\n\n\n";
		
		cout<<"\t\t\t\tChoose the given items and Mention quantity As well.\n\n";
		
		cout<<"\t\t\t\t1-"<<item1<<"\t\t"<<price1<<"Rs"<<unit1<<endl;
		cout<<"\t\t\t\t2-"<<item2<<"\t\t"<<price2<<"Rs"<<unit2<<endl;
		cout<<"\t\t\t\t3-"<<item3<<"\t\t"<<price3<<"Rs"<<unit3<<endl;
		cout<<"\t\t\t\t4-"<<item4<<"\t\t"<<price4<<"Rs"<<unit4<<endl;
		cout<<"\t\t\t\t5-"<<item5<<"\t\t"<<price5<<"Rs"<<unit5<<endl;
		cout<<"\n\t\t\t\t6-Go to previous page."<<endl;
	}
	
	void getdata()
	{
		cout<<"\n\n\n\n\n\t\t\t\t*********** "<<Section<<" Section **********\n\n\n";
		
		cout<<"\t\t\t\tSelect according to your desirable Catagory.\n\n\n";
		cout<<"\t\t\t\t1-"<<Item1<<endl;
		cout<<"\t\t\t\t2-"<<Item2<<endl;
		cout<<"\t\t\t\t3-"<<Item3<<endl;
		cout<<"\t\t\t\t4-"<<Item4<<endl;
		cout<<"\t\t\t\t5-"<<Item5<<endl<<endl;
		cout<<"\t\t\t\t6-Go to Previous Page."<<endl<<endl;
		
		cout<<"\n\n\t\t\t\tYour Choice : ";
	}
};

int main()
{
	Interface();
}

void Interface()
{
	
	system("cls");
	cout<<"\n\n\n\n\t\t\t_________________________________________________________________________________________\n";
	cout<<"    \t\t\t_________________________________________________________________________________________\n\n";
	cout<<"    \t\t\t***************************  Welcome To Online Bachat Bazaar  ***************************\n";
	cout<<"    \t\t\t_________________________________________________________________________________________\n";
	cout<<"    \t\t\t_________________________________________________________________________________________\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	cout<<"\t\t\t\t\t\t\t";
	
	for (i;i<2;i++)
	{	
	for (int i=0;i<23;i++)
	{
		cout<<name[i];
		Sleep(250);
	}
	
	cout<<endl;
	
	cout<<"\t\t\t\t\t\t\t  ";
	
	for (int i=0;i<19;i++)
	{
		cout<<roll[i];
		Sleep(250);
	}
	}
	cin.get();
	labelm:
	system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t1-Register an account."<<endl;
	cout<<"\t\t\t\t\t2-Login to your ID."<<endl;
	cin>>inter;
	
	if(inter=="1")
	{
		registr();
	}
	else if(inter=="2")
	{
		login();
	}
	else
	{
		goto labelm;	
	}
	
}

void registr()
{
        i=3;
        string reguser,regpass,ru,rp;
        char x;
        system("cls");
        cout<<"\n\n\n\t\tUsername :";
        cin>>reguser;
        cout<<"\n\t\tPassword :";
        for (int i=1;i<=6;i++)
        {
        	x=getch();
        	regpass+=x;
        	cout<<"*";
        //	if (x==(char)13)
        //	break;
		}
        
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        
		cout<<"\n\n\t\tPlease wait\n\t\tYour account is been creating";
		for(int i=0;i<8;i++)
        {
        	cout<<".";
        	Sleep(500);
		}
        
        cout<<"\n\n\t\tRegistration Sucessful\n";
        
    	c=getch();
        
        Interface();
        
        
}

void login()
{
        int count;
        char x;
        string user,pass,u,p;
     	system("cls");
        cout<<"\n\n\t\tPLease login to your ID"<<endl;
        cout<<"\n\t\tUSERNAME :";
        cin>>user;
        cout<<"\n\t\tPASSWORD :";
        for (int i=1;i<=6;i++)
        {
        	x=getch();
        	pass+=x;
        	cout<<"*";
        //	if (x==(char)13)
        //	break;
		}
        
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
        
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t********** Hello "<<user<<
				" **********\n\n\n\n\t\t\t\t\t\t********** LOGIN SUCESS **********\n\n\n\t\t\t";
                cin.get();
                cin.get();
                Balance();
        }
        else
        {
        		system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t************* LOGIN ERROR *************\n\n\n\n\t\t\t\t\t\tPlease check your username and password\n";
                cin.get();
                cin.get();
                Interface();
        }
        
}

void Balance()
{

	
	system("cls");
	
	cout<<"\n\n\t\tPress the following keys according to the instructions.";
	cout<<"\n\n\n\t\t1-Want to Shop.\n\t\t2-Go Back to Login Screen.\n\n\t\t";
	
	cin>>x;
	
	if (x=="1")
	{
		items();
	}
	else if (x=="2")
	{
		Interface();
	}
	else
	{
		Balance();
	}
}

void items()
{
	
	system("cls");	
	
	cout<<"\n\n\t\t\t_________________________________________________________________________________________\n";
	cout<<"    \t\t\t_________________________________________________________________________________________\n\n";
	cout<<"    \t\t\t***************************  Welcome To Online Bachat Bazaar  ***************************\n";
	cout<<"    \t\t\t_________________________________________________________________________________________\n";
	cout<<"    \t\t\t_________________________________________________________________________________________\n";
	cout<<"\n\n\t\t\tChoose according to your Interest : \n\n"<<
			"\t\t\t1-Grossery."<<endl<<
			"\t\t\t2-Electronics and Home Appliences."<<endl<<
			"\t\t\t3-Smart Phones."<<endl<<
			"\t\t\t4-Motor Bikes."<<endl<<
			"\t\t\t5-Books."<<endl<<
			"\t\t\t6-Sports."<<endl<<
			"\t\t\t7-Pets and Animals."<<endl<<
			"\t\t\t8-Kids."<<endl<<
			"\t\t\t9-Fashion And Beauty."<<endl<<
			"\t\t\t10-Furniture and Home Decor."<<endl<<
			"\t\t\t11-Computer and Accessories."<<endl<<
			"\t\t\t12-Medicine."<<endl<<
			"\t\t\t13-Go Back to Login Screen."<<endl<<endl<<endl;
			
	cout<<"\t\t\tYour Choice : ";
	cin>>choose;
	
	system ("cls");
	
	
	
	if(choose=="1")
	{	
	label1:
	system("cls");
	Shop Grossery("Grossery","Fruits","Vegetables","Spices","General Items","Snacks");
	Grossery.getdata();
	cin>>choice;
	
		if(choice=="1")
		{	
			
			Grossery.Catagory1("Fruit","Apple\t","Mango\t","Banana","Orange","grapes",100,150,80,120,200,"/kg","/kg","/dozen","/kg","/kg");
			cin>>choose;
			if (choose=="1")
			{
				Grossery.Item("Apple","Kg",0,100,"","","","","");
			}
			else if (choose=="2")
			{
				Grossery.Item("Mango","Kg",0,150,"","","","","");
			}
			else if (choose=="3")
			{
				Grossery.Item("Banana","Dozen",0,80,"","","","","");
			}
			else if (choose=="4")
			{
				Grossery.Item("Orange","Kg",0,120,"","","","","");
			}
			else if (choose=="5")
			{
				Grossery.Item("Grapes","Kg",0,200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label1;
			}
			else
			{
				goto label1;	
			}
		}
		else if(choice=="2")
		{
			Grossery.Catagory1("Vegetable","Onion\t","Potato","Tomato","Chille","Bringle",50,20,80,90,50,"/kg","/kg","/kg","/kg","/kg");
			cin>>choose;
			if (choose=="1")
			{
				Grossery.Item("Onion","Kg",0,50,"","","","","");
			}
			else if (choose=="2")
			{
				Grossery.Item("Potato","Kg",0,20,"","","","","");
			}
			else if (choose=="3")
			{
				Grossery.Item("Tomato","Kg",0,80,"","","","","");
			}
			else if (choose=="4")
			{
				Grossery.Item("Chille","Kg",0,90,"","","","","");
			}
			else if (choose=="5")
			{
				Grossery.Item("Bringle","Kg",0,50,"","","","","");
			}
			else if (choose=="6")
			{
				goto label1;
			}
			else
			{
				goto label1;	
			}
		}
		else if(choice=="3")
		{
			Grossery.Catagory1("Spices","Black Cardamom","Green Cardamom","Chat Masala\t","Carom seed\t","Pomegranate seed",500,400,50,300,200,"/kg","/kg","/Packet","/kg","/kg");
			cin>>choose;
			if (choose=="1")
			{
				Grossery.Item("Black Cardamom","Kg",0,500,"","","","","");
			}
			else if (choose=="2")
			{
				Grossery.Item("Green Cardamom","Kg",0,400,"","","","","");
			}
			else if (choose=="3")
			{
				Grossery.Item("Chat Masala","Packet",0,50,"","","","","");
			}
			else if (choose=="4")
			{
				Grossery.Item("Carom seed","Kg",0,300,"","","","","");
			}
			else if (choose=="5")
			{
				Grossery.Item("Pomegranate seed","Kg",0,200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label1;
			}
			else
			{
				goto label1;	
			}
		}	
		else if(choice=="4")
		{
			Grossery.Catagory1("General Items","Tea\t","Suga\t","Rice\t","Flour\t","Brown Sugar",880,200,350,420,300,"/kg","/kg","/kg","/kg","/kg");
			cin>>choose;
			if (choose=="1")
			{
				Grossery.Item("Tea","Kg",0,880,"","","","","");
			}
			else if (choose=="2")
			{
				Grossery.Item("Sugar","Kg",0,200,"","","","","");
			}
			else if (choose=="3")
			{
				Grossery.Item("Rice","Kg",0,350,"","","","","");
			}
			else if (choose=="4")
			{
				Grossery.Item("Flour","Kg",0,420,"","","","","");
			}
			else if (choose=="5")
			{
				Grossery.Item("Brown Sugar","Kg",0,300,"","","","","");
			}
			else if (choose=="6")
			{
				goto label1;
			}
			else
			{
				goto label1;	
			}
		}
		else if(choice=="5")
		{
			Grossery.Catagory1("Snacks","Chips\t","Biscuits","Chocolate","Candies","Cake\t",100,150,200,50,300,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Grossery.Item("Chips","",0,100,"","","","","");
			}
			else if (choose=="2")
			{
				Grossery.Item("Biscuits","",0,150,"","","","","");
			}
			else if (choose=="3")
			{
				Grossery.Item("Chocolate","",0,200,"","","","","");
			}
			else if (choose=="4")
			{
				Grossery.Item("Candies","",0,50,"","","","","");
			}
			else if (choose=="5")
			{
				Grossery.Item("Cake","",0,300,"","","","","");
			}
			else if (choose=="6")
			{
				goto label1;
			}
			else
			{
				goto label1;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
	
	}
	else if(choose=="2")
	{
		
		label2:
		system("cls");
	Shop Electronics("Electronics and Home Appliences","Camera","Refregirator","Air Conditioner","Kitchen Appliences","Washing Machine");
	Electronics.getdata();
	
	cin>>choice;
	
		if(choice=="1")
		{
			Electronics.Catagory1("Camera","Nikon_1","Nikon_2","Nikon_3","Cannon_1","Cannon_2",50000,70000,100000,60000,120000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Electronics.Item("Nikon_1","",0,50000,"","","","","");
			}
			else if (choose=="2")
			{
				Electronics.Item("Nikon_2","",0,70000,"","","","","");
			}
			else if (choose=="3")
			{
				Electronics.Item("Nikon_3","",0,100000,"","","","","");
			}
			else if (choose=="4")
			{
				Electronics.Item("Cannon_1","",0,60000,"","","","","");
			}
			else if (choose=="5")
			{
				Electronics.Item("Cannon_2","",0,120000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label2;
			}
			else
			{
				goto label2;	
			}
		}
		else if(choice=="2")
		{
			Electronics.Catagory1("Refregirator","Dawlance_1","Dawlance_2","Haier_1","Haier_2","Haier_3",50000,60000,80000,90000,105000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Electronics.Item("Refregirator","",0,50000,"","","","","");
			}
			else if (choose=="2")
			{
				Electronics.Item("Dawlance_2","",0,60000,"","","","","");
			}
			else if (choose=="3")
			{
				Electronics.Item("Haier_1","",0,80000,"","","","","");
			}
			else if (choose=="4")
			{
				Electronics.Item("Haier_2","",0,90000,"","","","","");
			}
			else if (choose=="5")
			{
				Electronics.Item("Haier_3","",0,105000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label2;
			}
			else
			{
				goto label2;	
			}
		}
		else if(choice=="3")
		{
			Electronics.Catagory1("Air Conditioner","Haier_1_Ton AC","Haier_2_Ton AC","Haier_1.5_Ton AC","Dawlance_1_Ton_AC","Dawlance_2_Ton_AC",50000,100000,75000,52000,99000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Electronics.Item("Haier_1_Ton_AC","",0,50000,"","","","","");
			}
			else if (choose=="2")
			{
				Electronics.Item("Haier_2_Ton_AC","",0,100000,"","","","","");
			}
			else if (choose=="3")
			{
				Electronics.Item("Haier_1.5_Ton_AC","",0,75000,"","","","","");
			}
			else if (choose=="4")
			{
				Electronics.Item("Dawlance_1_Ton_AC","",0,52000,"","","","","");
			}
			else if (choose=="5")
			{
				Electronics.Item("Dawlance 2 Ton AC","",0,99000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label2;
			}
			else
			{
				goto label2;	
			}
		}	
		else if(choice=="4")
		{
			Electronics.Catagory1("Kitchen Appliences","Jucer Machine\t","Chopper\t","Coffee Beater\t","Oven\t\t","Grinder\t",2000,1000,1200,9000,3000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Electronics.Item("Jucer Machine","",0,2000,"","","","","");
			}
			else if (choose=="2")
			{
				Electronics.Item("Chopper","",0,1000,"","","","","");
			}
			else if (choose=="3")
			{
				Electronics.Item("Coffee Beater","",0,1200,"","","","","");
			}
			else if (choose=="4")
			{
				Electronics.Item("Oven","",0,9000,"","","","","");
			}
			else if (choose=="5")
			{
				Electronics.Item("Grinder","",0,3000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label2;
			}
			else
			{
				goto label2;	
			}
		}
		else if(choice=="5")
		{
			Electronics.Catagory1("Washing Machine","Dawlance 1","Dawlance 2","Dawlance 3","Hair 1","Hair 2",10000,15000,20000,22000,30000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Electronics.Item("Dawlance_1","",0,10000,"","","","","");
			}
			else if (choose=="2")
			{
				Electronics.Item("Dawlance_2","",0,15000,"","","","","");
			}
			else if (choose=="3")
			{
				Electronics.Item("Dawlance_3","",0,20000,"","","","","");
			}
			else if (choose=="4")
			{
				Electronics.Item("Hair_1","",0,22000,"","","","","");
			}
			else if (choose=="5")
			{
				Electronics.Item("Hair_2","",0,30000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label2;
			}
			else
			{
				goto label2;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
		
	
	}
	else if(choose=="3")
	{
	label3:
	system("cls");
	Shop Phones("Smart Phone","Samsung","Oppo","Apple","Vivo","RealMe");
	Phones.getdata();
	
	cin>>choice;
	
		if(choice=="1")
		{
			Phones.Catagory1("Samsung","Samsung A03","Samsung A12","Samsung A32","Samsung A52","Samsung A72",23000,25000,35000,53000,72000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Phones.Item("Samsung_A03","",0,23000,"","","","","");
			}
			else if (choose=="2")
			{
				Phones.Item("Samsung_A12","",0,25000,"","","","","");
			}
			else if (choose=="3")
			{
				Phones.Item("Samsung_A32","",0,35000,"","","","","");
			}
			else if (choose=="4")
			{
				Phones.Item("Samsung_A52","",0,53000,"","","","","");
			}
			else if (choose=="5")
			{
				Phones.Item("Samsung_A72","",0,72000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label3;
			}
			else
			{
				goto label3;	
			}
		}
		else if(choice=="2")
		{
			Phones.Catagory1("Oppo","Oppo F19","Oppo A95","Oppo A16","Oppo A54","Oppo A96",35999,40999,13999,25000,45000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Phones.Item("Oppo_F19","",0,35999,"","","","","");
			}
			else if (choose=="2")
			{
				Phones.Item("Oppo_A95","",0,40999,"","","","","");
			}
			else if (choose=="3")
			{
				Phones.Item("Oppo_A16","",0,13999,"","","","","");
			}
			else if (choose=="4")
			{
				Phones.Item("Oppo_A54","",0,25000,"","","","","");
			}
			else if (choose=="5")
			{
				Phones.Item("Oppo_A96","",0,45000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label3;
			}
			else
			{
				goto label3;	
			}
		}
		else if(choice=="3")
		{
			Phones.Catagory1("Apple","Iphone 8","Iphone X","Iphone 11","Iphone 12","Iphone 13",80000,100000,140000,160000,200000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Phones.Item("Iphone_8","",0,80000,"","","","","");
			}
			else if (choose=="2")
			{
				Phones.Item("Iphone_X","",0,100000,"","","","","");
			}
			else if (choose=="3")
			{
				Phones.Item("Iphone_11","",0,140000,"","","","","");
			}
			else if (choose=="4")
			{
				Phones.Item("Iphone_12","",0,160000,"","","","","");
			}
			else if (choose=="5")
			{
				Phones.Item("Iphone_13","",0,200000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label3;
			}
			else
			{
				goto label3;	
			}
		}	
		else if(choice=="4")
		{
			Phones.Catagory1("Vivo","Vivo Y33s","Vivo Y23e","Vivo y21","Vivo S1","Vivo V20",20000,23000,35000,42000,30200,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Phones.Item("Vivo_Y33s","",0,20000,"","","","","");
			}
			else if (choose=="2")
			{
				Phones.Item("Vivo_Y23e","",0,23000,"","","","","");
			}
			else if (choose=="3")
			{
				Phones.Item("Vivo_y21","",0,35000,"","","","","");
			}
			else if (choose=="4")
			{
				Phones.Item("Vivo_S1","",0,42000,"","","","","");
			}
			else if (choose=="5")
			{
				Phones.Item("Vivo_V20","",0,30200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label3;
			}
			else
			{
				goto label3;	
			}
		}
		else if(choice=="5")
		{
			Phones.Catagory1("RealMe","RealMe 1","RealMe 2","RealMe 3","RealMe 4","RealMe 5",10000,15000,20000,50000,30000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Phones.Item("RealMe_1","",0,10000,"","","","","");
			}
			else if (choose=="2")
			{
				Phones.Item("RealMe_2","",0,15000,"","","","","");
			}
			else if (choose=="3")
			{
				Phones.Item("RealMe_3","",0,20000,"","","","","");
			}
			else if (choose=="4")
			{
				Phones.Item("RealMe_4","",0,50000,"","","","","");
			}
			else if (choose=="5")
			{
				Phones.Item("RealMe_5","",0,30000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label3;
			}
			else
			{
				goto label3;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
		
	}
	else if(choose=="4")
	{
	label4:
	system("cls");
	Shop Bike("Moter Bike","Honda","Unique","Superstar","Superpower","Suzuki");
	Bike.getdata();
	cin>>choice;
	
		if(choice=="1")
		{
			Bike.Catagory1("Honda","70 CC\t","110 CC","125 CC","150 CC","200 CC",60000,120000,150000,180000,220000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Bike.Item("70_CC","",0,60000,"","","","","");
			}
			else if (choose=="2")
			{
				Bike.Item("110_CC","",0,120000,"","","","","");
			}
			else if (choose=="3")
			{
				Bike.Item("125_CC","",0,150000,"","","","","");
			}
			else if (choose=="4")
			{
				Bike.Item("150_CC","",0,180000,"","","","","");
			}
			else if (choose=="5")
			{
				Bike.Item("200_CC","",0,220000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label4;
			}
			else
			{
				goto label4;	
			}
		}
		else if(choice=="2")
		{
			Bike.Catagory1("Unique","70 CC\t","110 CC","125 CC","150 CC","200 CC",50000,110000,145000,175000,200000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Bike.Item("70_CC","",0,50000,"","","","","");
			}
			else if (choose=="2")
			{
				Bike.Item("110_CC","",0,110000,"","","","","");
			}
			else if (choose=="3")
			{
				Bike.Item("125_CC","",0,145000,"","","","","");
			}
			else if (choose=="4")
			{
				Bike.Item("150_CC","",0,175000,"","","","","");
			}
			else if (choose=="5")
			{
				Bike.Item("200_CC","",0,200000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label4;
			}
			else
			{
				goto label4;	
			}
		}
		else if(choice=="3")
		{
			Bike.Catagory1("Superstar","70 CC\t","110 CC","125 CC","150 CC","200 CC",45000,105000,140000,160000,190000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Bike.Item("70_CC","",0,45000,"","","","","");
			}
			else if (choose=="2")
			{
				Bike.Item("110_CC","",0,105000,"","","","","");
			}
			else if (choose=="3")
			{
				Bike.Item("125_CC","",0,140000,"","","","","");
			}
			else if (choose=="4")
			{
				Bike.Item("150_CC","",0,160000,"","","","","");
			}
			else if (choose=="5")
			{
				Bike.Item("200_CC","",0,190000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label4;
			}
			else
			{
				goto label4;	
			}
		}	
		else if(choice=="4")
		{
			Bike.Catagory1("Superpower","70 CC\t","110 CC","125 CC","150 CC","200 CC",45000,1050000,140000,160000,190000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Bike.Item("70_CC","",0,45000,"","","","","");
			}
			else if (choose=="2")
			{
				Bike.Item("110_CC","",0,105000,"","","","","");
			}
			else if (choose=="3")
			{
				Bike.Item("125_CC","",0,140000,"","","","","");
			}
			else if (choose=="4")
			{
				Bike.Item("150_CC","",0,160000,"","","","","");
			}
			else if (choose=="5")
			{
				Bike.Item("200_CC","",0,190000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label4;
			}
			else
			{
				goto label4;	
			}
		}
		else if(choice=="5")
		{
			Bike.Catagory1("Suzuki","70 CC\t","110 CC","125 CC","150 CC","200 CC",60000,120000,150000,200000,250000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Bike.Item("70_CC","",0,60000,"","","","","");
			}
			else if (choose=="2")
			{
				Bike.Item("110_CC","",0,120000,"","","","","");
			}
			else if (choose=="3")
			{
				Bike.Item("125_CC","",0,150000,"","","","","");
			}
			else if (choose=="4")
			{
				Bike.Item("150_CC","",0,200000,"","","","","");
			}
			else if (choose=="5")
			{
				Bike.Item("200_CC","",0,250000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label4;
			}
			else
			{
				goto label4;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
		
	}
	else if(choose=="5")
	{
	label5:
	system("cls");
	Shop Books("Books","History","Horror","Action","Adventure","Technology");
	Books.getdata();
	cin>>choice;
	
		if(choice=="1")
		{
			Books.Catagory1("History","Gengis Khan\t\t","Rise Of Ottomons\t","The Fall of Ottomon Empire","The Crusades\t\t","Ancient World\t\t",500,1500,480,1200,800,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Books.Item("Gengis Khan","",0,500,"","","","","");
			}
			else if (choose=="2")
			{
				Books.Item("Rise Of Ottomons","",0,1500,"","","","","");
			}
			else if (choose=="3")
			{
				Books.Item("The Fall of Ottomon Empire","",0,480,"","","","","");
			}
			else if (choose=="4")
			{
				Books.Item("The Crusades","",0,1200,"","","","","");
			}
			else if (choose=="5")
			{
				Books.Item("Ancient World","",0,800,"","","","","");
			}
			else if (choose=="6")
			{
				goto label5;
			}
			else
			{
				goto label5;	
			}
		}
		else if(choice=="2")
		{
			Books.Catagory1("Horror","House of leaves","Dracula\t","Mexican Gothic","IT by Stephen\t","The Hunger\t",650,820,780,910,950,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Books.Item("House of leaves","",0,650,"","","","","");
			}
			else if (choose=="2")
			{
				Books.Item("Dracula","",0,820,"","","","","");
			}
			else if (choose=="3")
			{
				Books.Item("Mexican Gothic","",0,780,"","","","","");
			}
			else if (choose=="4")
			{
				Books.Item("IT by Stephen","",0,910,"","","","","");
			}
			else if (choose=="5")
			{
				Books.Item("The Hunger","",0,950,"","","","","");
			}
			else if (choose=="6")
			{
				goto label5;
			}
			else
			{
				goto label5;	
			}
		}
		else if(choice=="3")
		{
			Books.Catagory1("Action","Harry Potter\t","The Hobbit\t","Stuart Woods\t","Treasure Island","Jaws\t\t",2000,1400,950,1300,1200,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Books.Item("Harry Potter","",0,2000,"","","","","");
			}
			else if (choose=="2")
			{
				Books.Item("The Hobbit","",0,1400,"","","","","");
			}
			else if (choose=="3")
			{
				Books.Item("Stuart Woods","",0,950,"","","","","");
			}
			else if (choose=="4")
			{
				Books.Item("Treasure Island","",0,1300,"","","","","");
			}
			else if (choose=="5")
			{
				Books.Item("Jaws","",0,1200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label5;
			}
			else
			{
				goto label5;	
			}
		}	
		else if(choice=="4")
		{
			Books.Catagory1("Adventure","Around the world\t","The Mysterious Island","Call of the wild\t","Kidnapped\t\t","Tarzan\t\t",880,2200,3500,4220,2300,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Books.Item("Around the world","",0,880,"","","","","");
			}
			else if (choose=="2")
			{
				Books.Item("The Mysterious Island","",0,2200,"","","","","");
			}
			else if (choose=="3")
			{
				Books.Item("Call of the wild","",0,3500,"","","","","");
			}
			else if (choose=="4")
			{
				Books.Item("Kidnapped","",0,4220,"","","","","");
			}
			else if (choose=="5")
			{
				Books.Item("Tarzan","",0,2300,"","","","","");
			}
			else if (choose=="6")
			{
				goto label5;
			}
			else
			{
				goto label5;	
			}
		}
		else if(choice=="5")
		{
			Books.Catagory1("Technology","Life 3.0\t","The Exponentials","The Innovators","Steve Jobs\t","Elon Musk\t",5000,3150,2400,3350,3800,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Books.Item("Life_3.0","",0,5000,"","","","","");
			}
			else if (choose=="2")
			{
				Books.Item("The Exponentials","",0,3150,"","","","","");
			}
			else if (choose=="3")
			{
				Books.Item("The Innovators","",0,2400,"","","","","");
			}
			else if (choose=="4")
			{
				Books.Item("Steve Jobs","",0,3350,"","","","","");
			}
			else if (choose=="5")
			{
				Books.Item("Elon Musk","",0,3800,"","","","","");
			}
			else if (choose=="6")
			{
				goto label5;
			}
			else
			{
				goto label5;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
	}
	else if(choose=="6")
	{
	label6:	
	system("cls");
	
	Shop Sports("Sports","Cricket","Hockey","Badminton and Tennis","FootBall","Board Games");
	Sports.getdata();
	
	cin>>choice;
	
		if(choice=="1")
		{
			Sports.Catagory1("Cricket","Cricket Bat","Cricket Ball","Stumps","Pads\t","Complete Kit",2000,350,1500,2000,12000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Sports.Item("Cricket Bat","",0,2000,"","","","","");
			}
			else if (choose=="2")
			{
				Sports.Item("Cricket Ball","",0,350,"","","","","");
			}
			else if (choose=="3")
			{
				Sports.Item("Stumps","",0,1500,"","","","","");
			}
			else if (choose=="4")
			{
				Sports.Item("Pads","",0,2000,"","","","","");
			}
			else if (choose=="5")
			{
				Sports.Item("Complete Kit","",0,12000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label6;
			}
			else
			{
				goto label6;	
			}
		}
		else if(choice=="2")
		{
			Sports.Catagory1("Hockey","Hockey Stick","Helmet","puck\t","Goggles","Complete Kit",1500,520,120,520,5000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Sports.Item("Hockey Stick","",0,1500,"","","","","");
			}
			else if (choose=="2")
			{
				Sports.Item("Helmet","",0,520,"","","","","");
			}
			else if (choose=="3")
			{
				Sports.Item("puck","",0,120,"","","","","");
			}
			else if (choose=="4")
			{
				Sports.Item("Goggles","",0,520,"","","","","");
			}
			else if (choose=="5")
			{
				Sports.Item("Complete Kit","",0,5000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label6;
			}
			else
			{
				goto label6;	
			}
		}
		else if(choice=="3")
		{
			Sports.Catagory1("Badminton and Tennis","Racket","Ball\t","shuttlecock","Trackers","Complete Kit",2500,100,80,3000,7000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Sports.Item("Racket","",0,2500,"","","","","");
			}
			else if (choose=="2")
			{
				Sports.Item("Ball","",0,100,"","","","","");
			}
			else if (choose=="3")
			{
				Sports.Item("shuttlecock","",0,80,"","","","","");
			}
			else if (choose=="4")
			{
				Sports.Item("Trackers","",0,3000,"","","","","");
			}
			else if (choose=="5")
			{
				Sports.Item("Complete Kit","",0,7000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label6;
			}
			else
			{
				goto label6;	
			}
		}	
		else if(choice=="4")
		{
			Sports.Catagory1("FootBall","FootBall","Jersey","Socks\t","Shoes\t","Complete Kit",1500,500,350,5000,6000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Sports.Item("FootBall","",0,1500,"","","","","");
			}
			else if (choose=="2")
			{
				Sports.Item("Jersey","",0,500,"","","","","");
			}
			else if (choose=="3")
			{
				Sports.Item("Socks","",0,350,"","","","","");
			}
			else if (choose=="4")
			{
				Sports.Item("Shoes","",0,5000,"","","","","");
			}
			else if (choose=="5")
			{
				Sports.Item("Complete Kit","",0,6000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label6;
			}
			else
			{
				goto label6;	
			}
		}
		else if(choice=="5")
		{
			Sports.Catagory1("Board Games","Chess Board","Ludo\t","Carrom Board","Tabble Tennis","Scrable",2000,1500,3200,12000,800,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Sports.Item("Chess Board","",0,2000,"","","","","");
			}
			else if (choose=="2")
			{
				Sports.Item("Ludo","",0,1500,"","","","","");
			}
			else if (choose=="3")
			{
				Sports.Item("Carrom Board","",0,3200,"","","","","");
			}
			else if (choose=="4")
			{
				Sports.Item("Tabble Tennis","",0,12000,"","","","","");
			}
			else if (choose=="5")
			{
				Sports.Item("Scrable","",0,800,"","","","","");
			}
			else if (choose=="6")
			{
				goto label6;
			}
			else
			{
				goto label6;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
	}
	else if(choose=="7")
	{
	label7:
	system("cls");
	
	Shop Pets("Pets and Animals","Pets","Birds","Snakes","Fish","Bird and Fish Food");
	Pets.getdata();
	
	cin>>choice;
	
		if(choice=="1")
		{
			Pets.Catagory1("Pets","German Sphered Dog","Bull Dog\t","Persian Cat\t","Orange Cat\t","White Goat\t",10000,15000,8000,12000,30000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Pets.Item("German Sphered Dog","",0,10000,"","","","","");
			}
			else if (choose=="2")
			{
				Pets.Item("Bull Dog","",0,15000,"","","","","");
			}
			else if (choose=="3")
			{
				Pets.Item("Persian Cat","",0,8000,"","","","","");
			}
			else if (choose=="4")
			{
				Pets.Item("Orange Cat","",0,12000,"","","","","");
			}
			else if (choose=="5")
			{
				Pets.Item("White Goat","",0,30000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label7;
			}
			else
			{
				goto label7;	
			}
		}
		else if(choice=="2")
		{
			Pets.Catagory1("Birds","Green Parrot","Pigeon","Caccatto","Maccau","Grey Parrot",5000,2000,80000,100000,50000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Pets.Item("Green Parrot","",0,5000,"","","","","");
			}
			else if (choose=="2")
			{
				Pets.Item("Pigeon","",0,2000,"","","","","");
			}
			else if (choose=="3")
			{
				Pets.Item("Caccatto","",0,80000,"","","","","");
			}
			else if (choose=="4")
			{
				Pets.Item("Maccau","",0,100000,"","","","","");
			}
			else if (choose=="5")
			{
				Pets.Item("Grey Parrot","",0,50000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label7;
			}
			else
			{
				goto label7;	
			}
		}
		else if(choice=="3")
		{
			Pets.Catagory1("Snakes","Python","Cobra\t","Viper\t","Anaconda","KingSnakes",20000,40000,50000,30000,20000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Pets.Item("Python","",0,20000,"","","","","");
			}
			else if (choose=="2")
			{
				Pets.Item("Cobra","",0,40000,"","","","","");
			}
			else if (choose=="3")
			{
				Pets.Item("Viper","",0,50000,"","","","","");
			}
			else if (choose=="4")
			{
				Pets.Item("Anaconda","",0,30000,"","","","","");
			}
			else if (choose=="5")
			{
				Pets.Item("KingSnakes","",0,20000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label7;
			}
			else
			{
				goto label7;	
			}
		}	
		else if(choice=="4")
		{
			Pets.Catagory1("Fish","Gold Fish","Betta Fish","Neon Fish","Fighter Fish","Baby Shark",880,2000,3500,4200,3000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Pets.Item("Gold Fish","",0,880,"","","","","");
			}
			else if (choose=="2")
			{
				Pets.Item("Betta Fish","",0,2000,"","","","","");
			}
			else if (choose=="3")
			{
				Pets.Item("Neon Fish","",0,3500,"","","","","");
			}
			else if (choose=="4")
			{
				Pets.Item("Fighter Fish","",0,4200,"","","","","");
			}
			else if (choose=="5")
			{
				Pets.Item("Baby Shark","",0,3000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label7;
			}
			else
			{
				goto label7;	
			}
		}
		else if(choice=="5")
		{
			Pets.Catagory1("Bird and Fish Food","Sun Flower Seed","Peanuts\t","Safflower Seed","Wheat Seeds\t","Boltz Fish Food",100,150,200,500,300,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Pets.Item("Sun Flower Seed","",0,100,"","","","","");
			}
			else if (choose=="2")
			{
				Pets.Item("Peanuts","",0,150,"","","","","");
			}
			else if (choose=="3")
			{
				Pets.Item("Safflower Seed","",0,200,"","","","","");
			}
			else if (choose=="4")
			{
				Pets.Item("Wheat Seeds","",0,500,"","","","","");
			}
			else if (choose=="5")
			{
				Pets.Item("Boltz Fish Food","",0,300,"","","","","");
			}
			else if (choose=="6")
			{
				goto label7;
			}
			else
			{
				goto label7;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
	}
	else if(choose=="8")
	{
	label8:
	system("cls");
	
	Shop Kids("Kids","Toys","Clothes","Glasses","Watches","Importents");
	Kids.getdata();
	cin>>choice;
	
		if(choice=="1")
		{
			Kids.Catagory1("Toys","Car\t","Gun\t","Puzzles","Helicopter","Monster Truck",100,150,80,120,200,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Kids.Item("Car","",0,100,"","","","","");
			}
			else if (choose=="2")
			{
				Kids.Item("Gun","",0,150,"","","","","");
			}
			else if (choose=="3")
			{
				Kids.Item("Puzzles","",0,80,"","","","","");
			}
			else if (choose=="4")
			{
				Kids.Item("Helicopter","",0,120,"","","","","");
			}
			else if (choose=="5")
			{
				Kids.Item("Monster Truck","",0,200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label8;
			}
			else
			{
				goto label8;	
			}
		}
		else if(choice=="2")
		{
			Kids.Catagory1("Clothes","Shalwar Kameez","Pents\t\t","Shirts\t","Shorts\t","Hoddies\t",500,200,280,190,500,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Kids.Item("Shalwar Kameez","",0,500,"","","","","");
			}
			else if (choose=="2")
			{
				Kids.Item("Pents","",0,200,"","","","","");
			}
			else if (choose=="3")
			{
				Kids.Item("Shirts","",0,280,"","","","","");
			}
			else if (choose=="4")
			{
				Kids.Item("Shorts","",0,190,"","","","","");
			}
			else if (choose=="5")
			{
				Kids.Item("Hoddies","",0,500,"","","","","");
			}
			else if (choose=="6")
			{
				goto label8;
			}
			else
			{
				goto label8;	
			}
		}
		else if(choice=="3")
		{
			Kids.Catagory1("Glasses","Black Glasses","Green Glasses","White Glasses","Star Glasses","Bold Glasses",500,400,500,300,200,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Kids.Item("Black Glasses","",0,500,"","","","","");
			}
			else if (choose=="2")
			{
				Kids.Item("Green Glasses","",0,400,"","","","","");
			}
			else if (choose=="3")
			{
				Kids.Item("White Glasses","",0,500,"","","","","");
			}
			else if (choose=="4")
			{
				Kids.Item("Star Glasses","",0,300,"","","","","");
			}
			else if (choose=="5")
			{
				Kids.Item("Bold Glasses","",0,200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label8;
			}
			else
			{
				goto label8;	
			}
		}	
		else if(choice=="4")
		{
			Kids.Catagory1("Watches","Ben 10 Watch","Batman Watch","Doremon Watch","Pokemon Watch","Dragon Watch",880,200,350,420,300,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Kids.Item("Ben 10 Watch","",0,880,"","","","","");
			}
			else if (choose=="2")
			{
				Kids.Item("Batman Watch","",0,200,"","","","","");
			}
			else if (choose=="3")
			{
				Kids.Item("Doremon Watch","",0,350,"","","","","");
			}
			else if (choose=="4")
			{
				Kids.Item("Pokemon Watch","",0,420,"","","","","");
			}
			else if (choose=="5")
			{
				Kids.Item("Dragon Watch","",0,300,"","","","","");
			}
			else if (choose=="6")
			{
				goto label8;
			}
			else
			{
				goto label8;	
			}
		}
		else if(choice=="5")
		{
			Kids.Catagory1("Importents","Diapers","Baby Lotion","Baby Shampoo","Baby Shoes","Baby Socks",1000,350,200,350,300,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Kids.Item("Diapers","",0,1000,"","","","","");
			}
			else if (choose=="2")
			{
				Kids.Item("Baby Lotion","",0,350,"","","","","");
			}
			else if (choose=="3")
			{
				Kids.Item("Baby Shampoo","",0,200,"","","","","");
			}
			else if (choose=="4")
			{
				Kids.Item("Baby Shoes","",0,350,"","","","","");
			}
			else if (choose=="5")
			{
				Kids.Item("Baby Socks","",0,300,"","","","","");
			}
			else if (choose=="6")
			{
				goto label8;
			}
			else
			{
				goto label8;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
	}
	else if(choose=="9")
	{
	label9:
	system("cls");
	
	Shop Fashion("Fashion and Beauty","Watches","Jewelry","Perfumes","Glasses","Hand Bags and Wallet");
	Fashion.getdata();
	cin>>choice;
	
		if(choice=="1")
		{
			Fashion.Catagory1("Watches","Armani Exchange","Rolex\t\t","Citizen\t","Obaku\t\t","ProKing\t",25000,15000,18000,27000,3000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Fashion.Item("Armani Exchange","",0,25000,"","","","","");
			}
			else if (choose=="2")
			{
				Fashion.Item("Rolex","",0,15000,"","","","","");
			}
			else if (choose=="3")
			{
				Fashion.Item("Citizen","",0,18000,"","","","","");
			}
			else if (choose=="4")
			{
				Fashion.Item("Obaku","",0,27000,"","","","","");
			}
			else if (choose=="5")
			{
				Fashion.Item("ProKing","",0,3000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label9;
			}
			else
			{
				goto label9;	
			}
		}
		else if(choice=="2")
		{
			Fashion.Catagory1("Jewelry","Necklace 1","Necklace 2","Bracelet","Gold Ring","Ear Rings",1500,2000,800,9000,500,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Fashion.Item("Necklace_1","",0,1500,"","","","","");
			}
			else if (choose=="2")
			{
				Fashion.Item("Necklace_2","",0,2000,"","","","","");
			}
			else if (choose=="3")
			{
				Fashion.Item("Bracelet","",0,800,"","","","","");
			}
			else if (choose=="4")
			{
				Fashion.Item("Gold Ring","",0,9000,"","","","","");
			}
			else if (choose=="5")
			{
				Fashion.Item("Ear Rings","",0,500,"","","","","");
			}
			else if (choose=="6")
			{
				goto label9;
			}
			else
			{
				goto label9;	
			}
		}
		else if(choice=="3")
		{
			Fashion.Catagory1("Perfumes","J. Fragrance\t","MTJ Fragrance\t","CK fragrance\t","Cambridge Fragrance","Xlink Fragrance",5000,4000,5000,23000,2000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Fashion.Item("J. Fragrance","",0,5000,"","","","","");
			}
			else if (choose=="2")
			{
				Fashion.Item("MTJ Fragrance","",0,4000,"","","","","");
			}
			else if (choose=="3")
			{
				Fashion.Item("CK fragrance","",0,5000,"","","","","");
			}
			else if (choose=="4")
			{
				Fashion.Item("Cambridge Fragrance","",0,23000,"","","","","");
			}
			else if (choose=="5")
			{
				Fashion.Item("Xlink Fragrance","",0,2000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label9;
			}
			else
			{
				goto label9;	
			}
		}	
		else if(choice=="4")
		{
			Fashion.Catagory1("Glasses","Raybon 1","Raybon 2","Raybon 3","Raybon 4","Raybon 5",1000,2000,1500,4200,3000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Fashion.Item("J. Fragrance","",0,1000,"","","","","");
			}
			else if (choose=="2")
			{
				Fashion.Item("MTJ Fragrance","",0,2000,"","","","","");
			}
			else if (choose=="3")
			{
				Fashion.Item("CK fragrance","",0,1500,"","","","","");
			}
			else if (choose=="4")
			{
				Fashion.Item("Cambridge Fragrance","",0,4200,"","","","","");
			}
			else if (choose=="5")
			{
				Fashion.Item("Xlink Fragrance","",0,3000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label9;
			}
			else
			{
				goto label9;	
			}
		}
		else if(choice=="5")
		{
			Fashion.Catagory1("Hand Bags and Wallet","J. Hand Bag 1\t","J. Hand Bag 2\t","J. Wallet 1\t","J. Waller 2\t","Cambridge Wallet 1",2000,1500,2000,5000,3000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Fashion.Item("J. Hand Bag_1","",0,2000,"","","","","");
			}
			else if (choose=="2")
			{
				Fashion.Item("J. Hand Bag_2","",0,1500,"","","","","");
			}
			else if (choose=="3")
			{
				Fashion.Item("J. Wallet_1","",0,2000,"","","","","");
			}
			else if (choose=="4")
			{
				Fashion.Item("J. Waller_2","",0,5000,"","","","","");
			}
			else if (choose=="5")
			{
				Fashion.Item("Cambridge Wallet_1","",0,3000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label9;
			}
			else
			{
				goto label9;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
		
	}
	else if(choose=="10")
	{
	label10:
	system("cls");

	Shop Furniture("Furniture and Home decor","Complete Room set","Sofas","Tables and Chairs","Beds","Dressers");
	Furniture.getdata();
	
	cin>>choice;
	
		if(choice=="1")
		{
			Furniture.Catagory1("Complete Room set","Metal Black","Metal Gold","Wood Brown","Wood Black","Wood Golden",50000,60000,80000,120000,100000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Furniture.Item("Metal Black","",0,50000,"","","","","");
			}
			else if (choose=="2")
			{
				Furniture.Item("Metal Gold","",0,60000,"","","","","");
			}
			else if (choose=="3")
			{
				Furniture.Item("Wood Brown","",0,80000,"","","","","");
			}
			else if (choose=="4")
			{
				Furniture.Item("Wood Black","",0,120000,"","","","","");
			}
			else if (choose=="5")
			{
				Furniture.Item("Wood Golden","",0,100000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label10;
			}
			else
			{
				goto label10;	
			}
		}
		else if(choice=="2")
		{
			Furniture.Catagory1("Sofas","Sectional Sofa\t","ChesterField Sofa\t","Mid Centuary\t\t","English Rolled Arm Sofas","CamelBack Sofas\t",50000,20000,80000,90000,50000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Furniture.Item("Sectional Sofa","",0,50000,"","","","","");
			}
			else if (choose=="2")
			{
				Furniture.Item("ChesterField Sofa","",0,20000,"","","","","");
			}
			else if (choose=="3")
			{
				Furniture.Item("Mid Centuary","",0,80000,"","","","","");
			}
			else if (choose=="4")
			{
				Furniture.Item("English Rolled Arm Sofas","",0,90000,"","","","","");
			}
			else if (choose=="5")
			{
				Furniture.Item("CamelBack Sofas","",0,50000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label10;
			}
			else
			{
				goto label10;	
			}
		}
		else if(choice=="3")
		{
			Furniture.Catagory1("Tables and Chairs","Metal Chairs\t","Wood Chairs\t","Plastic Chairs","Wood Tables\t","Plastic Tables",10000,6000,5000,8000,2000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Furniture.Item("Metal Chairs","",0,10000,"","","","","");
			}
			else if (choose=="2")
			{
				Furniture.Item("Wood Chairs","",0,6000,"","","","","");
			}
			else if (choose=="3")
			{
				Furniture.Item("Wood Tables","",0,5000,"","","","","");
			}
			else if (choose=="4")
			{
				Furniture.Item("Wood Tables","",0,8000,"","","","","");
			}
			else if (choose=="5")
			{
				Furniture.Item("Plastic Tables","",0,2000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label10;
			}
			else
			{
				goto label10;	
			}
		}	
		else if(choice=="4")
		{
			Furniture.Catagory1("Beds","Wooden Black","Wooden Brown","Wooden White","Metal Black","Metal Brown",20000,21000,20000,42000,41000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Furniture.Item("Wooden Black","",0,20000,"","","","","");
			}
			else if (choose=="2")
			{
				Furniture.Item("Wooden Brown","",0,21000,"","","","","");
			}
			else if (choose=="3")
			{
				Furniture.Item("Wooden White","",0,20000,"","","","","");
			}
			else if (choose=="4")
			{
				Furniture.Item("Metal Black","",0,42000,"","","","","");
			}
			else if (choose=="5")
			{
				Furniture.Item("Metal Brown","",0,41000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label10;
			}
			else
			{
				goto label10;	
			}
		}
		else if(choice=="5")
		{
			Furniture.Catagory1("Dressers","Wooden Black","Wooden Brown","Wooden White","Metal Black","Metal Brown",10000,10000,10000,12000,13000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Furniture.Item("Wooden Black","",0,10000,"","","","","");
			}
			else if (choose=="2")
			{
				Furniture.Item("Wooden Brown","",0,10000,"","","","","");
			}
			else if (choose=="3")
			{
				Furniture.Item("Wooden White","",0,10000,"","","","","");
			}
			else if (choose=="4")
			{
				Furniture.Item("Metal Black","",0,12000,"","","","","");
			}
			else if (choose=="5")
			{
				Furniture.Item("Metal Brown","",0,13000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label10;
			}
			else
			{
				goto label10;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
		
	}
	else if(choose=="11")
	{
	label11:
	system("cls");
	
	Shop Computer("Computer and Accessories","Laptop","Proccessor","HDD and SSD","RAM","Power Supply");
	Computer.getdata();
	cin>>choice;
	
		if(choice=="1")
		{
			Computer.Catagory1("Laptop","Macbook Pro\t","Hp Pavillion\t","Hp EliteBook\t","Dell Inspirasion","Acer Nitro\t",150000,120000,180000,150000,90000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Computer.Item("Macbook Pro","",0,150000,"","","","","");
			}
			else if (choose=="2")
			{
				Computer.Item("Hp Pavillion","",0,120000,"","","","","");
			}
			else if (choose=="3")
			{
				Computer.Item("Hp EliteBook","",0,180000,"","","","","");
			}
			else if (choose=="4")
			{
				Computer.Item("Dell Inspirasion","",0,150000,"","","","","");
			}
			else if (choose=="5")
			{
				Computer.Item("Acer Nitro","",0,90000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label11;
			}
			else
			{
				goto label11;	
			}
		}
		else if(choice=="2")
		{
			Computer.Catagory1("Proccessor","i3 10100","i5 10100","i7 10100","i3 11000","i5 11000",24000,29000,31000,29000,30000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Computer.Item("i3_10100","",0,24000,"","","","","");
			}
			else if (choose=="2")
			{
				Computer.Item("i5_10100","",0,29000,"","","","","");
			}
			else if (choose=="3")
			{
				Computer.Item("i7_10100","",0,31000,"","","","","");
			}
			else if (choose=="4")
			{
				Computer.Item("i3_11000","",0,29000,"","","","","");
			}
			else if (choose=="5")
			{
				Computer.Item("i5_11000","",0,30000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label11;
			}
			else
			{
				goto label11;	
			}
		}
		else if(choice=="3")
		{
			Computer.Catagory1("HDD and SSD","500 GB HDD","1 TB HDD","128 GB SSD","256 GB SSD","512 GB SSD",4000,8000,2500,5000,10000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Computer.Item("500_GB HDD","",0,4000,"","","","","");
			}
			else if (choose=="2")
			{
				Computer.Item("1_TB HDD","",0,8000,"","","","","");
			}
			else if (choose=="3")
			{
				Computer.Item("128_GB SSD","",0,2500,"","","","","");
			}
			else if (choose=="4")
			{
				Computer.Item("256_GB SSD","",0,5000,"","","","","");
			}
			else if (choose=="5")
			{
				Computer.Item("512_GB SSD","",0,10000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label11;
			}
			else
			{
				goto label11;	
			}
		}	
		else if(choice=="4")
		{
			Computer.Catagory1("RAM","2 GB RAM","4 GB RAM","8 GB RAM","16 GB RAM","32 GB RAM",1500,3000,6000,12000,20000,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Computer.Item("2_GB RAM","",0,1500,"","","","","");
			}
			else if (choose=="2")
			{
				Computer.Item("4_GB RAM","",0,3000,"","","","","");
			}
			else if (choose=="3")
			{
				Computer.Item("8_GB RAM","",0,6000,"","","","","");
			}
			else if (choose=="4")
			{
				Computer.Item("16_GB RAM","",0,12000,"","","","","");
			}
			else if (choose=="5")
			{
				Computer.Item("32_GB RAM","",0,20000,"","","","","");
			}
			else if (choose=="6")
			{
				goto label11;
			}
			else
			{
				goto label11;	
			}
		}
		else if(choice=="5")
		{
			Computer.Catagory1("Power Supply","350 Watt","450 Watt","550 Watt","650 Watt","750 Watt",2500,3500,4500,5500,6500,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Computer.Item("350_Watt","",0,2500,"","","","","");
			}
			else if (choose=="2")
			{
				Computer.Item("450_Watt","",0,3500,"","","","","");
			}
			else if (choose=="3")
			{
				Computer.Item("550_Watt","",0,4500,"","","","","");
			}
			else if (choose=="4")
			{
				Computer.Item("650_Watt","",0,5500,"","","","","");
			}
			else if (choose=="5")
			{
				Computer.Item("750_Watt","",0,6500,"","","","","");
			}
			else if (choose=="6")
			{
				goto label11;
			}
			else
			{
				goto label11;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
	}
	else if(choose=="12")
	{
	label12:
	system("cls");
	
	Shop Medicine("Medicine","Allergies","Cold and Flu","Headache","Dirrhea","Diabetes");
	Medicine.getdata();
	
	cin>>choice;
	
		if(choice=="1")
		{
			Medicine.Catagory1("Allergies","Claratin","Nasacort","Rigix\t","Zyrtec","Xyzal\t",250,150,80,120,200,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Medicine.Item("Claratin","",0,250,"","","","","");
			}
			else if (choose=="2")
			{
				Medicine.Item("Nasacort","",0,150,"","","","","");
			}
			else if (choose=="3")
			{
				Medicine.Item("Rigix","",0,80,"","","","","");
			}
			else if (choose=="4")
			{
				Medicine.Item("Zyrtec","",0,120,"","","","","");
			}
			else if (choose=="5")
			{
				Medicine.Item("Xyzal","",0,200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label12;
			}
			else
			{
				goto label12;	
			}
		}
		else if(choice=="2")
		{
			Medicine.Catagory1("Cold and Flu","Panadol","Arenac","Ponstan","Actifit P","4 Flu\t",20,50,20,90,50,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Medicine.Item("Panadol","",0,20,"","","","","");
			}
			else if (choose=="2")
			{
				Medicine.Item("Arenac","",0,50,"","","","","");
			}
			else if (choose=="3")
			{
				Medicine.Item("Ponstan","",0,20,"","","","","");
			}
			else if (choose=="4")
			{
				Medicine.Item("Actifit P","",0,90,"","","","","");
			}
			else if (choose=="5")
			{
				Medicine.Item("4_Flu","",0,50,"","","","","");
			}
			else if (choose=="6")
			{
				goto label12;
			}
			else
			{
				goto label12;	
			}
		}
		else if(choice=="3")
		{
			Medicine.Catagory1("Headache","Panadol","Brufen","Caflam","Ponstan","Aspirin",20,240,140,20,200,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Medicine.Item("Panadol","",0,20,"","","","","");
			}
			else if (choose=="2")
			{
				Medicine.Item("Brufen","",0,240,"","","","","");
			}
			else if (choose=="3")
			{
				Medicine.Item("Caflam","",0,140,"","","","","");
			}
			else if (choose=="4")
			{
				Medicine.Item("Ponstan","",0,20,"","","","","");
			}
			else if (choose=="5")
			{
				Medicine.Item("Aspirin","",0,200,"","","","","");
			}
			else if (choose=="6")
			{
				goto label12;
			}
			else
			{
				goto label12;	
			}
		}	
		else if(choice=="4")
		{
			Medicine.Catagory1("Dirrhea","Intox\t","Zentox","Bismuth","Loperamide","Bismol",20,20,35,40,30,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Medicine.Item("Intox","",0,20,"","","","","");
			}
			else if (choose=="2")
			{
				Medicine.Item("Zentox","",0,20,"","","","","");
			}
			else if (choose=="3")
			{
				Medicine.Item("Bismuth","",0,35,"","","","","");
			}
			else if (choose=="4")
			{
				Medicine.Item("Loperamide","",0,40,"","","","","");
			}
			else if (choose=="5")
			{
				Medicine.Item("Bismol","",0,30,"","","","","");
			}
			else if (choose=="6")
			{
				goto label12;
			}
			else
			{
				goto label12;	
			}
		}
		else if(choice=="5")
		{
			Medicine.Catagory1("Diabetes","Insulin","Metforim","Glipizide","Glimepride","Invokana",300,550,200,530,300,"","","","","");
			cin>>choose;
			if (choose=="1")
			{
				Medicine.Item("Insulin","",0,300,"","","","","");
			}
			else if (choose=="2")
			{
				Medicine.Item("Metforim","",0,550,"","","","","");
			}
			else if (choose=="3")
			{
				Medicine.Item("Glipizide","",0,200,"","","","","");
			}
			else if (choose=="4")
			{
				Medicine.Item("Glimepride","",0,530,"","","","","");
			}
			else if (choose=="5")
			{
				Medicine.Item("Invokana","",0,300,"","","","","");
			}
			else if (choose=="6")
			{
				goto label12;
			}
			else
			{
				goto label12;	
			}
		}
		else if(choice=="6")
		{
			items();
		}
		else
		{
			items();	
		}
		
	}
	else if(choose=="13")
	{
		Interface();
	}
	else 
	{
		Interface();
	}
	

cin.get();
cin.get();

}
