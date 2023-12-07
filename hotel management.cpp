#include<iostream>
using namespace std;
int main(){
	int quant;
	int choice;
	//Quantity
	int Qrooms=0,Qpasta=0, Qnoodles=0, Qshake=0, Qchicken=0;
	//food items solid
	int Srooms=0,Spasta=0, Snoodles=0, Sshake=0, Schicken=0;
	//Total Prace of items
	int Total_rooms=0,Total_pasta=0, Total_noodles=0, Total_shake=0, Total_chicken=0;
	
	cout<<"\n\t Quantity Of Items We Have";
	cout<<"\nRooms Available:";
	cin>>Qrooms;
	cout<<"\nQuantity Of Pasta:";
	cin>>Qpasta;
	cout<<"\nQuantity Of Noodles:";
	cin>>Qnoodles;
	cout<<"\nQuantity Of Shake:";
	cin>>Qshake;
	cout<<"\nQuantity Of Chicken-Roll:";
	cin>>Qchicken;
	
	cout<<"\n\t\t\t Please Select From The Menu Options";
	cout<<"\n\n 1. Rooms";
	cout<<"\n\n 2. Pasta";
	cout<<"\n\n 3. Noodles";
	cout<<"\n\n 4. Shake";
	cout<<"\n\n 5. Chicken-Roll";
	cout<<"\n\n 6. Information Regarding Sales and Collection";
	cout<<"\n\n 7. Exit";
	
	cout<<"\n\n Please Enter Your Choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"\n\n Enter The Number Of Rooms You Want:";
			
			cin>>quant;
			if(Qrooms-Srooms >=quant)
			{
				Srooms=Srooms+quant;
				Total_rooms= Total_rooms+quant*1200;
				cout<<"\n\n\t\t"<<quant<<" Room/Rooms have been alloted to you!";
			}
			else
			
			    cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
			    break;
			    
			    case 2:
			cout<<"\n\n Enter Pasta Quantity :" ;
			
			cin>>quant;
			if(Qpasta-Spasta >=quant)
			{
				Spasta=Spasta+quant;
				Total_pasta= Total_pasta+quant*250;
				cout<<"\n\n\t\t"<<quant<<"Pasta if ordered!";
					}    	
					else 
					
					cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel ";
	}
	
	

}
