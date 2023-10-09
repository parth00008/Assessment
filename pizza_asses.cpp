#include<iostream>
using namespace std;
class method{
	public:
	    int choice;
		char name[10];
			
		void menu()
		{
		cout<<"------Tops Tech Fast Food-----"<<endl<<endl;
		cout<<"please enter your name: ";
		cin>>name;
		cout<<"hello "<<name<<endl<<endl;
		
		
	}
		
		void list(){
			int choice,quentity,c,number;
			char n[20],y,Y;
			
			do{
		cout<<"What Would you like to Order?"<<endl<<endl;
		cout<<"-----Menu-----"<<endl;
		cout<<"1) Pizzas"<<endl;
		cout<<"2) Burgers"<<endl;
		cout<<"3) Sandwich"<<endl;
		cout<<"4) Rolls"<<endl;
		cout<<"5) Biryani"<<endl<<endl;
			
		
			
		cout<<"please enter your choice:";
		cin>>choice;
				switch(choice){
				
	
			case 1:cout<<"1.small pizza Rs.100"<<endl;
			       cout<<"2.medium pizza Rs.150"<<endl;
			       cout<<"3.large pizza Rs.200"<<endl<<endl;
			       cout<<"please enter which pizza you would like to have?"<<endl;
			       cin>>number;
			       
			       
			       
			       
			       if(number==1)
			       {
			       	 cout<<"please enter quentity: "<<endl;
			       	 cin>>quentity;
			       	 cout<<"-----your order-----"<<endl<<endl<<endl;
			       	 cout<<"1.small pizza Rs.100"<<endl<<endl;
			       	 c=quentity*100;
			       	 cout<<"your total is:"<<c<<endl<<endl;
				   }
				   else if(number==2)
				   {
				   	cout<<"please enter quentity: "<<endl;
			       	cin>>quentity;
			       	cout<<"-----your order-----"<<endl<<endl<<endl;
			       	cout<<"2.medium pizza Rs.150"<<endl;
				   	c=quentity*150;
			       	cout<<"your total is:"<<c<<endl<<endl;
				   }
				   else
				   {
				   	cout<<"please enter quentity: ";
			       	cin>>quentity;
			       	cout<<"-----your order-----"<<endl<<endl;
			       	cout<<"3.large pizza Rs.200"<<endl; 
				   	c=quentity*200;
			       	cout<<"your total is:"<<c<<endl<<endl;
				   }
				   break;
			case 2:cout<<"please enter quentity: ";
			       	cin>>quentity;
			        c=quentity*30;
			       	cout<<"your total is:"<<c<<endl<<endl;
			       	break;
		    
            case 3:cout<<"1.club sandwich Rs.240"<<endl;
			       cout<<"2.veg.crispy sandwich Rs.160"<<endl;
			       cout<<"3.extream veg sandwich Rs.100"<<endl;
			       cout<<"please enter which sandwich you would like to have?"<<endl;
			       cin>>number;
			       
			       
			       
			       if(number==1)
			       {
			       	 cout<<"please enter quentity: ";
			       	 cin>>quentity;
			       	 cout<<"-----your order-----"<<endl<<endl;
			       	cout<<"1.club sandwich Rs.240"<<endl;
			       	 c=quentity*240;
			       	 cout<<"your total is:"<<c<<endl<<endl;
				   }
				   else if(number==2)
				   {
				   	cout<<"please enter quentity: ";
			       	 cin>>quentity;
			       	 cout<<"-----your order-----"<<endl<<endl;
			       	cout<<"2. veg.crispy sandwich Rs.160"<<endl<<endl;
				   	c=quentity*160;
			       	cout<<"your total is:"<<c<<endl<<endl;
				   }
				   else
				   {
				   	cout<<"please enter quentity: ";
			       	cin>>quentity;
			       	cout<<"-----your order-----"<<endl<<endl;
			       	cout<<"3. extream veg sandwich Rs.100"<<endl<<endl;
				   	c=quentity*100;
			       	cout<<"your total is:"<<c<<endl<<endl;
				   }
				   break;
			case 4:cout<<"please enter quentity: ";
			       	cin>>quentity;
			        c=quentity*30;
			       	cout<<"your total is:"<<c<<endl<<endl;
			       	break;
			case 5:cout<<"please enter quentity: ";
			       	cin>>quentity;
			        c=quentity*140;
			       	cout<<"your total is:"<<c<<endl<<endl;
			       	break;
			       	default:cout<<"invalid input!"<<endl<<endl;
			       	
                 }
            cout<<"your order will be deliverd in 40 minutes...."<<endl<<endl;
            cout<<"thank you for the ordering from tops tech fast food"<<endl<<endl;
            cout<<"would you like to order anything else? Y/N: ";
            cin>>Y;
        }
            while(y || Y);
            
           
		}

};
int main()
{
	method m1;
	m1.menu();
	m1.list();
}
//	m1.choice();

