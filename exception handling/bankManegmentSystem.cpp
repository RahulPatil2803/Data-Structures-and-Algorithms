#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class bank_account
{
	public:
	int acc_no;
	int deposit;
	int withdraw;
	int avl_bal;
	char id[10];
	int pass;
};
int main()
{
	bank_account saving_acc[2]; // array for two saving account

	//I will assign value to that block
	saving_acc[0].acc_no=111;
	saving_acc[0].deposit=0;
	saving_acc[0].withdraw=0;
	saving_acc[0].avl_bal=1000;
	strcpy(saving_acc[0].id,"rahul");
	saving_acc[0].pass=111;

	//I will assign value to that block
	saving_acc[1].acc_no=112;
	saving_acc[1].deposit=0;
	saving_acc[1].withdraw=0;
	saving_acc[1].avl_bal=500;
	strcpy(saving_acc[1].id,"devashree");
	saving_acc[1].pass=112;

	//I will assign value to that block
	saving_acc[2].acc_no=113;
	saving_acc[2].deposit=0;
	saving_acc[2].withdraw=0;
	saving_acc[2].avl_bal=2000;
	strcpy(saving_acc[2].id,"riya");
	saving_acc[2].pass=113;

	//I will assign value to that block
	saving_acc[3].acc_no=114;
	saving_acc[3].deposit=0;
	saving_acc[3].withdraw=0;
	saving_acc[3].avl_bal=5000;
	strcpy(saving_acc[3].id,"mayuri");
	saving_acc[3].pass=114;

	//I will assign value to that block
	saving_acc[4].acc_no=115;
	saving_acc[4].deposit=0;
	saving_acc[4].withdraw=0;
	saving_acc[4].avl_bal=5000;
	strcpy(saving_acc[4].id,"vaishnavi");
	saving_acc[4].pass=115;

	int ch;
	int count_login=0;
	int login_chance=3;
	while(true)
	{
	cout<<"\n**************\n";
	cout<<"\nWelcome in Fedral Bank \n";
	cout<<"1.Login User\n2.Exit\n-->";
	cin>>ch;
	cout<<"\n**************\n";

	switch(ch)
	{
		case 1 :
		{
			char userID[10];
			int userPass;
			try
			{
				for(int i=0;i<5;i++)
				{
				count_login++;
				login_chance--;
				if(count_login==4)
				{
					cout<<"exit";
					return 0;
				}
				cout<<"\nEnter ID :";
				cin>>userID;
				cout<<"\nEnter Password :";
				cin>>userPass;
					try{
					if(strcmp(userID,saving_acc[i].id)==0)
					{
						if(strcmp(userID,saving_acc[i].id)==0)
						{
							if(saving_acc[i].pass==userPass)
							{
								cout<<"\n+++++++++++++++++\n";
								cout<<"Login sucessfully ";
								cout<<"\n+++++++++++++++++\n";
								int menu_ch;
								cout<<"\nSelect Option :\n";
								int out=1;
								while(out=true)
								{
								cout<<"\n**********\n";
								cout<<"1.Deposit Money\n2.Withdraw Money\n3.Tranfer Money\n4.Check Balence\n5.Main Menu\n-->";
								cin>>menu_ch;
								cout<<"\n**********\n";
								switch(menu_ch)
								{
									case 1:
									{
										try{
										cout<<"Enter amount for deposit :";
										int deposit;
										cin>>deposit;
										if(deposit<1){
											throw deposit;
										}
										saving_acc[i].deposit=deposit;
										saving_acc[i].avl_bal=(saving_acc[i].avl_bal)+(saving_acc[i].deposit);
										cout<<"\nAmount Deposit sucessfully !"<<endl;
										cout<<"Available Balence :"<<saving_acc[i].avl_bal<<endl;
										}
										catch(int amt)
										{
											cout<<"\nYou enters amount :"<<amt<<".Amount cant 0/less than 0"<<endl;
										}										
										break;
									}
									case 2:
									{
										try{
										cout<<"Enter amount for withdraw :";
										int withdraw;
										cin>>withdraw;
										if(saving_acc[i].avl_bal<withdraw)
										{
											throw withdraw;
										}
										saving_acc[i].withdraw=withdraw;
										saving_acc[i].avl_bal=(saving_acc[i].avl_bal)-(saving_acc[i].withdraw);
										cout<<"\nAmount Deposit sucessfully !"<<endl;
										cout<<"Available Balence :"<<saving_acc[i].avl_bal<<endl;
										}
										catch(int amt)
										{
											cout<<"You entered amount :"<<amt<<"\nWithdraw amount should be less than available balence ."<<endl;
										}
										break;
									}
									case 3:
									{
										int transfer_acc;
										cout<<"\nTesting for transfer";
										
										cout<<"\nEnter acc no to Transfer :";
										cin>>transfer_acc;
										for(int j=0;j<5;j++)
										{
											try{
												if(transfer_acc==saving_acc[j].acc_no)
												{
													int t_amount;
													int amt;
													cout<<"Enter amount :";
													cin>>t_amount;
													try
													{
														if(t_amount<saving_acc[i].avl_bal)
														{
															//ithe add kele next aacount madye 
															saving_acc[j].avl_bal=((saving_acc[j].avl_bal)+(t_amount));
															//ithe remove kela from original aacount
															saving_acc[i].avl_bal=((saving_acc[i].avl_bal)-(t_amount));
															break;
														}
														else
														{
															throw t_amount;
														}
													}
													catch(int t_amt)
													{
														cout<<"\n**********************************************************"<<endl;
														cout<<"You enters Transfer amount :"<<t_amt<<endl;
														cout<<"You should transfer only less amount from available balence !"<<endl;
														cout<<"Your Available Balence :[ "<<saving_acc[i].avl_bal<<" ]"<<endl;
														cout<<"\n**********************************************************"<<endl;
														break;
													}
												}
												if(j==4) //if bank account not found
												{
													throw transfer_acc;
												}
											}
											catch(int t_acc)
											{
												cout<<"\nYou enters Account no :"<<t_acc<<" is not exist !"<<endl;
												break;
											}
										}
										//cout<<transfer_acc;
										break;
									}
									case 4:
									{
										cout<<"\nAvailable Balence of Acc_No "<<saving_acc[i].acc_no<<" is :"<<(saving_acc[i].avl_bal)<<endl;
										break;
									}
									case 5:
									{
										// exit(0);
										// out=false;
										break;
									}
									default :
									{
										cout<<"\nEnter Correct Input ";
										break;
									}
								}
								}
							}
							else
							{
								throw userPass;
							}
						}
						else
						{
							throw userID;
						}
					}
					else
					{
						throw userID;
					}
					}			
			        catch(char *id)
			            {
				            cout<<"\nI'm testing";
				            cout<<"Your Entered ID :"<<id<<" is wrong !\n";
							cout<<"\nYou have only left "<<login_chance<<" chance to login !"<<endl;
							if(login_chance==0)
							{
								cout<<"\nSorry , You exit from application";
								return 0;
							}
				            cout<<"\n*******************************\n";
						//	return 0;
		                }

				}
				
			}
			catch(char *id)
			{
				cout<<"hello";
				cout<<"Your Entered ID :"<<id<<" is wrong !\n";
                cout<<"\nYou have only left "<<login_chance<<" chance to login !"<<endl;
				if(login_chance==0)
				{
					cout<<"\nSorry , You exit from application";
					return 0;
				}
				cout<<"\n*******************************\n";
			}
			catch(int pass)
			{
				cout<<"Your Entered password :"<<pass<<" is wrong !\n";
				cout<<"\nYou have only left "<<login_chance<<" chance to login !"<<endl;
				if(login_chance==0)
				{
					cout<<"\nSorry , You exit from application";
					return 0;
				}
				cout<<"\n********************************\n";
			}
		break;
		}
		case 2 :
		{
			cout<<"\nLogout sucessfully !";
			return 0;
		}
		default:
		break;
	}
	}

return 0;
}