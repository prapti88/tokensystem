#include<bits/stdc++.h>
using namespace std;

struct customerNode
{
    string customerName;
    int toolQuantity,bill,orderToken;
    customerNode *next;

}*customerHead=NULL;


struct toolNode
{
    string toolName;
    int toolPrice,toolToken;
    toolNode *next;

}*toolHead=NULL;

struct pendingToolNode
{
    string pendningToolName;
    int pendingToolQuantity;
    pendingToolNode *next;

}*pendingToolHead=NULL;

int profit=0;

void addCustomer()
{
    customerNode *c=new customerNode();
    customerNode *x;

    cout<<"Customer User Name(without space): ";
    cin>>c->customerName;
    cout<<"Order Token: ";
    cin>>c->orderToken;
    cout<<"Tool Quantity: ";
    cin>>c->toolQuantity;
    cout<<".................\n";

    c->next=NULL;

    if(customerHead==NULL){
        customerHead=c;
    }
    else{
        x=customerHead;
        while(x->next!=NULL){
            x=x->next;
        }
        x->next=c;
    }
}

void toolStroage()
{
    toolNode *currentTool,*ct;

    currentTool=new toolNode();
    currentTool->toolName="Large Screwdrivers";
    currentTool->toolToken=1;
    currentTool->toolPrice=120;
    currentTool->next=NULL;
    toolHead=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Medium Screwdrivers";
    currentTool->toolToken=2;
    currentTool->toolPrice=100;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Small Screwdrivers";
    currentTool->toolToken=3;
    currentTool->toolPrice=60;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Large Pliers";
    currentTool->toolToken=4;
    currentTool->toolPrice=105;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Small Pliers";
    currentTool->toolToken=5;
    currentTool->toolPrice=60;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Large Wire Cutters";
    currentTool->toolToken=6;
    currentTool->toolPrice=260;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Small Wire Cutters";
    currentTool->toolToken=7;
    currentTool->toolPrice=180;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Wire Strippers";
    currentTool->toolToken=8;
    currentTool->toolPrice=350;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Crimping Tools";
    currentTool->toolToken=9;
    currentTool->toolPrice=2400;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Socket and Hex Drivers";
    currentTool->toolToken=10;
    currentTool->toolPrice=3600;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Large Clamps";
    currentTool->toolToken=11;
    currentTool->toolPrice=1300;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Medium Clamps";
    currentTool->toolToken=12;
    currentTool->toolPrice=535;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Small Clamps";
    currentTool->toolToken=13;
    currentTool->toolPrice=260;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Rotary Tools";
    currentTool->toolToken=14;
    currentTool->toolPrice=1600;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Grinders Tools";
    currentTool->toolToken=15;
    currentTool->toolPrice=3500;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Drills";
    currentTool->toolToken=16;
    currentTool->toolPrice=5600;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Drill Bits Set";
    currentTool->toolToken=17;
    currentTool->toolPrice=1200;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Tweezers";
    currentTool->toolToken=18;
    currentTool->toolPrice=600;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;


    currentTool=new toolNode();
    currentTool->toolName="Glue Gun";
    currentTool->toolToken=19;
    currentTool->toolPrice=400;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Multimeter";
    currentTool->toolToken=20;
    currentTool->toolPrice=2000;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Oscilloscope";
    currentTool->toolToken=21;
    currentTool->toolPrice=42000;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;

    currentTool=new toolNode();
    currentTool->toolName="Signal Generator";
    currentTool->toolToken=22;
    currentTool->toolPrice=5300;
    currentTool->next=NULL;
    while(ct->next!=NULL){
        ct=ct->next;
    }
    ct->next=currentTool;
    ct=toolHead;
}

void orderedToolProcess()
{
    toolStroage();
    customerNode *c=customerHead;
    toolNode *t;
    pendingToolNode *pt;

    while(c!=NULL){
        t=toolHead;
        while(t!=NULL){
            if(c->orderToken==t->toolToken){
                pt=new pendingToolNode();
                pt->pendningToolName=t->toolName;
                pt->pendingToolQuantity=c->toolQuantity;
                pt->next=pendingToolHead;
                pendingToolHead=pt;
            }
            t=t->next;
        }
        c=c->next;
    }
}

void orderedTool()
{
    orderedToolProcess();
    pendingToolNode *x=pendingToolHead;

    while(x!=NULL){
        cout<<"Ordered Tool: "<<x->pendningToolName<<"............"<<"Quantity: "<<x->pendingToolQuantity<<endl;
        x=x->next;

    }
}

void customerList()
{
    customerNode *c=customerHead;
    int i=1;

    while(c!=NULL){
        cout<<i<<"th name: "<<c->customerName<<endl;
        i++;
        c=c->next;
    }
}

void toolList()
{
    toolStroage();
    toolNode *t=toolHead;

    while(t!=NULL){
        cout<<"Tool Name: "<<t->toolName<<"(Tool Token: "<<t->toolToken<<")"<<endl;
        cout<<"tool Price: "<<t->toolPrice<<endl;
        cout<<"............................"<<endl;
        t=t->next;
    }
}

void income()
{
    toolStroage();
    customerNode *c=customerHead;
    toolNode *t;

    while(c!=NULL){
        t=toolHead;
        while(t!=NULL){
            if(c->orderToken==t->toolToken){
                c->bill=(t->toolPrice)*(c->toolQuantity);
                profit=profit+c->bill;
            }
            t=t->next;
        }
        c=c->next;
    }

    cout<<"Total Profit: "<<profit<<" Taka"<<endl;
    cout<<"................\n";
}

void menu()
{
    int choice;
    string qus;

    cout<<"Hello"<<endl;
    cout<<"Press 1 see the tool list"<<endl;
    cout<<"Press 2 to add customer"<<endl;
    cout<<"Press 3 to see customer details"<<endl;
    cout<<"Press 4 to see ordered tool list"<<endl;
    cout<<"Press 5 to see the profit(Taka)"<<endl;
    cout<<"Press 0 to exit"<<endl;
    cout<<"\t\tIf you forget about this choices after some interval press 'y' when asked to view the choices\n";

    cout<<"Your Choice: ";
    cin>>choice;

    while(choice==1||choice==2||choice==3||choice==4||choice==5){

        switch(choice)
        {
        case 1:
            toolList();
            cout<<"View choice list?(y/n): ";
            cin>>qus;
            if(qus=="y"||qus=="Y"){
            cout<<"\t\tPress 1 see the tool list"<<endl;
            cout<<"\t\tPress 2 to add customer"<<endl;
            cout<<"\t\tPress 3 to see customer details"<<endl;
            cout<<"\t\tPress 4 to see ordered tool list"<<endl;
            cout<<"\t\tPress 5 to see the profit(Taka)"<<endl;
            cout<<"\t\tPress 0 to exit"<<endl;
            cout<<"....................\n";
            }
            break;
        case 2:
            addCustomer();
            cout<<"View choice list?(y/n): ";
            cin>>qus;
            if(qus=="y"||qus=="Y"){
            cout<<"\t\tPress 1 see the tool list"<<endl;
            cout<<"\t\tPress 2 to add customer"<<endl;
            cout<<"\t\tPress 3 to see customer details"<<endl;
            cout<<"\t\tPress 4 to see ordered tool list"<<endl;
            cout<<"\t\tPress 5 to see the profit(Taka)"<<endl;
            cout<<"\t\tPress 0 to exit"<<endl;
            cout<<"....................\n";
            }
            break;
        case 3:
            customerList();
            cout<<"View choice list?(y/n): ";
            cin>>qus;
            if(qus=="y"||qus=="Y"){
            cout<<"\t\tPress 1 see the tool list"<<endl;
            cout<<"\t\tPress 2 to add customer"<<endl;
            cout<<"\t\tPress 3 to see customer details"<<endl;
            cout<<"\t\tPress 4 to see ordered tool list"<<endl;
            cout<<"\t\tPress 5 to see the profit(Taka)"<<endl;
            cout<<"\t\tPress 0 to exit"<<endl;
            cout<<"....................\n";
            }
            break;
        case 4:
            orderedTool();
            cout<<"View choice list?(y/n): ";
            cin>>qus;
            if(qus=="y"||qus=="Y"){
            cout<<"\t\tPress 1 see the tool list"<<endl;
            cout<<"\t\tPress 2 to add customer"<<endl;
            cout<<"\t\tPress 3 to see customer details"<<endl;
            cout<<"\t\tPress 4 to see ordered tool list"<<endl;
            cout<<"\t\tPress 5 to see the profit(Taka)"<<endl;
            cout<<"\t\tPress 0 to exit"<<endl;
            cout<<"....................\n";
            }
            break;
        case 5:
            income();
            cout<<"View choice list?(y/n): ";
            cin>>qus;
            if(qus=="y"||qus=="Y"){
            cout<<"\t\tPress 1 see the tool list"<<endl;
            cout<<"\t\tPress 2 to add customer"<<endl;
            cout<<"\t\tPress 3 to see customer details"<<endl;
            cout<<"\t\tPress 4 to see ordered tool list"<<endl;
            cout<<"\t\tPress 5 to see the profit(Taka)"<<endl;
            cout<<"\t\tPress 0 to exit"<<endl;
            cout<<"....................\n";
            }
            break;
        }
        cout<<"Your Choice: ";
        cin>>choice;

        if(choice==0){
            cout<<"Thanks for your co-operation"<<endl;
            break;
        }
    }
}

int main()
{
    menu();
}


