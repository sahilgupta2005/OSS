#include<graphics.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<iostream.h>
#include<fstream.h>
int cc=0;
void menu();
void error();
void merbenz();
void car();
void carselect();
void mersign();
void cars1();
void cars2();
void cars3();
void cars4();
void cars5();
void cars6();
void cars7();
void cars8();
void cars9();
class carmodel
{
	public:
		int carno,engdis,noc,tops,ftc,scap,nod,wartime;
		char carname[50],engtype[50],fsus[20];
		char rsus[20],ftype[20],tyretype[50];
		float turr,acc,mileage;

		void cardata()
		{
		cout<<"enter the car number";
		cin>>carno;

		cout<<"\tenter the car name";
		gets(carname);

		cout<<"\tenter the engine type";
		gets(engtype);

		cout<<"enter the engine displacement";
		cin>>engdis;

		cout<<"enter the number of cylinder";
		cin>>noc;

		cout<<"enter the front suspension";
		gets(fsus);

		cout<<"enter the turning radius";
		cin>>turr;

		cout<<"enter the rear suspension";
		gets(rsus);

		cout<<"enter the top speed";
		cin>>tops;

		cout<<"enter the acceleration";
		cin>>acc;

		cout<<"enter the mileage";
		cin>>mileage;

		cout<<"enter the fueltype";
		gets(ftype);

		cout<<"enter the fuel tank capacity";
		cin>>ftc;

		cout<<"enter the tyre type";
		gets(tyretype);

		cout<<"enter the seating capacity";
		cin>>scap;

		cout<<"enter the no of doors";
		cin>>nod;

		cout<<"enter the warranty time";
		cin>>wartime;

		}

		void showcars()
		{
		cout<<"ENGINE TYPE          :  "<<engtype<<endl;
		cout<<"ENGINE DISPLACEMENT  :  "<<engdis<<"cc"<<endl;
		cout<<"NUMBER OF CYLINDERS  :  "<<noc<<endl;
		cout<<"FRONT SUSPENSION     :  "<<fsus<<endl;
		cout<<"REAR SUSPENSION      :  "<<rsus<<endl;
		cout<<"TURNING RADIUS       :  "<<turr<<"  m"<<endl;
		if(carno==5020)
		cout<<"TOP SPEED            :  "<<tops<<"0  KMPH"<<endl;
		else
		cout<<"TOP SPEED            :  "<<tops<<"  KMPH"<<endl;
		cout<<"ACCELERATION (0-100) :  "<<acc<<"  KMPH"<<endl;
		cout<<"MILEAGE              :  "<<mileage<<"  KMPH"<<endl;
		cout<<"FUEL TYPE            :  "<<ftype<<endl;
		cout<<"FUEL TANK CAPACITY   :  "<<ftc<<endl;
		cout<<"TYRE TYPE            :  "<<tyretype<<endl;
		cout<<"SEATING CAPACITY     :  "<<scap<<endl;
		cout<<"NUMBERS OF DOORS     :  "<<nod<<endl;
		cout<<"WARRANTY TIME        :  "<<wartime<<endl;
		}




}cms;
void mersign()
{
circle(60+20,100,20);
line(60+20,100,60+20,80);
line(60+20,100,45+20,108);
line(60+20,100,75+20,108);
settextstyle(7,0,5);
settextstyle(7,0,5);
outtextxy(130,80,"Mercedes - Benz");

settextstyle(1,0,2);
outtextxy(160,130,"The best or nothing");


}
void thesa()
{
cleardevice();
clrscr();
settextstyle(6,0,2);
outtextxy(120,80,"SUBSIDIARIEDS AND ALLIANCES");
settextstyle(0,0,1);
outtextxy(400,80,"Press 1 : BACK");
outtextxy(380,100,"Press 2 : Main Menu");
char str4[1000];
cout<<"\n\n\n\n\n\n\n\n\t";
ifstream oks("s&a.txt");
while(!oks.eof())
{
oks>>str4;
cout<<str4<<" ";
}
oks.close();
char om;
om=getch();
if(om=='1')
{
delay(2000);
cleardevice();
clrscr();
merbenz();
delay(2000);
}
else if(om=='2')
{

clrscr();
cleardevice();
menu();
}
else
{
cleardevice();
clrscr();
error();
thesa();
}


}
void qualityranking()
{
cleardevice();
clrscr();

settextstyle(6,0,2);
outtextxy(120,70,"QUALITY RANKING");
settextstyle(0,0,1);
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
delay(1000);
textbackground(0);
char str3[2000];
cout<<"\n\n\n\n\n\n\n\t";
ifstream mes("press80s.txt");
while(!mes.eof())
{
mes>>str3;
cout<<str3<<" ";
}
mes.close();

char fe;
fe=getch();
if(fe=='1')
{
delay(2000);
cleardevice();
clrscr();
merbenz();
delay(2000);
}
else if(fe=='2')
{
clrscr();
cleardevice();
menu();
}
else
{
cleardevice();
clrscr();
error();
qualityranking();
}


}
void error()
{
settextstyle(6,0,3);
outtextxy(150,200,"YOU HAVE ENTERED A WRONG CHOICE");
delay(2000);
}

void nomen()
{
cleardevice();
clrscr();

settextstyle(6,0,2);
outtextxy(120,70,"CAR NOMENCLATURE");
settextstyle(0,0,1);
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
delay(1000);
textbackground(0);
char str2[2000];
cout<<"\n\n\n\n\n\n\n\t";
ifstream oes("press3o.txt");
while(!oes.eof())
{
oes>>str2;
cout<<str2<<" ";
}
oes.close();

char oe;
oe=getch();
if(oe=='1')
{
delay(2000);
cleardevice();
clrscr();
merbenz();
delay(2000);
}
else if(oe=='2')
{
clrscr();
cleardevice();
menu();
}
else
{
cleardevice();
clrscr();
error();
nomen();
}

}
void history()
{
cleardevice();
clrscr();

settextstyle(6,0,2);
outtextxy(120,70,"HISTORY");
settextstyle(0,0,1);
outtextxy(400,80,"Press 1 : BACK");
outtextxy(380,100,"Press 2 : Main Menu");
char str1[1000];
cout<<"\n\n\n\n\n\n\n\t";
ifstream ofs("history.txt");
while(!ofs.eof())
{
ofs>>str1;
cout<<str1<<" ";
}
ofs.close();
char ol;
ol=getch();
if(ol=='1')
{
delay(2000);
cleardevice();
clrscr();
merbenz();
delay(2000);
}
else if(ol=='2')
{

clrscr();
cleardevice();
menu();
}
else
{
cleardevice();
clrscr();
error();
history();
}

}
void arcd()
{
setbkcolor(13);
cleardevice();
outtextxy(170,160,"PLEASE WAIT REDIRECTING ");
for(int li=0;li<360;li++)
{
arc(280,320,0,0+li,15);
delay(20);

}


for(li=0;li<360;li++)
{
outtextxy(170,160,"PLEASE WAIT REDIRECTING ");
arc(280,320,0+li,0,15);
delay(20);
cleardevice();
}
}

void login();
void menu();
void merbenz()
{
setbkcolor(6);
cleardevice();
circle(60+20,70,20);
line(60+20,70,60+20,50);
line(60+20,70,45+20,78);
line(60+20,70,75+20,78);
settextstyle(7,0,5);
outtextxy(130,40,"Mercedes - Benz");
settextstyle(1,0,2);
outtextxy(160,100,"The best or nothing");
char str[1000];
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t";
ifstream efs("mersbn.txt");

while(!efs.eof())
{
efs>>str;
cout<<str<<" ";
}
efs.close();
settextstyle(3,0,1);
outtextxy(80,320,"PRESS 1 : SUBSIDIARIES AND ALLIANCES");
outtextxy(80,340,"PRESS 2 : QUALITY RANKING");
outtextxy(80,360,"PRESS 3 : CAR NOMENCLATURE");
outtextxy(80,380,"PRESS 4 : HISTORY");
outtextxy(80,400,"PRESS 5 : BACK ");

char in;
in=getch();
if(in=='1')
{
setbkcolor(4);
thesa();
}
else if(in=='2')
{
setbkcolor(3);
qualityranking();
}
if(in=='5')
{
delay(1000);
menu();
}
else if(in=='3')
{
setbkcolor(6);
nomen();
}
else if(in=='4')
{
setbkcolor(8);
history();
}
else
{
cleardevice();
clrscr();
error();
merbenz();

}

}
void buy()
{
cleardevice();
clrscr();
setbkcolor(8);

outtextxy(180,200,"SELECT MODE OF PAYMENT ");
outtextxy(200,230,"1 . CASH");
outtextxy(200,260,"2 . CHEQUE");
char b55;
b55=getch();
if(b55=='1'||b55=='2')
{
cleardevice();
clrscr();
outtextxy(100,100,"YOU HAVE SUCCESSFULLY BOOKED THE CAR ");
outtextxy(100,150,"WALKED IN TO NEARBY MERCEDEDS-BENZ SHOWROOM");
outtextxy(100,180,"TO HOLD THE KEYS IN YOUR HAND");
outtextxy(100,300,"ENJOY YOUR RIDE");
settextstyle(7,0,5);
outtextxy(100,340,"THANKS!!");
settextstyle(3,0,3);
outtextxy(100,400,"FOR CHOSING OUR COMPANY");
delay(10000);
menu();
}
else
{
cleardevice();
clrscr();
error();
delay(1000);
cleardevice();
clrscr();
carselect();
}
}
void cars12()
{

outtextxy(100,70,"      E 250 EDITION E");
cout<<"\n\n\n\n\n\n\n\n";

ifstream cxs("carmodeldata.dat",ios::binary|ios::in);
while(!cxs.eof())
{
cxs.read((char*)&cms,sizeof(cms));
 if(cms.carno==1020)
 {
 cms.showcars();
 cxs.close();
 break;
 }

}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 50.98 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b1;
b1=getch();
if(b1=='1')
{
delay(1000);
cleardevice();
clrscr();
cars1();

}
else if(b1=='y'||b1=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars12();
}
}
void cars13()
{
outtextxy(100,70,"     E 200 CGI");
cout<<"\n\n\n\n\n\n\n\n";

ifstream dxs("carmodeldata.dat",ios::binary|ios::in);
while(!dxs.eof())
{
dxs.read((char*)&cms,sizeof(cms));
 if(cms.carno==1030)
 {
 cms.showcars();
 dxs.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 49.93 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");

char b2;
b2=getch();
if(b2=='1')
{
delay(1000);
cleardevice();
clrscr();
cars1();

}
else if(b2=='y'||b2=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars13();
}
}

void cars14()
{
outtextxy(100,70,"     E 400 CABRIOLET");
cout<<"\n\n\n\n\n\n\n\n";

ifstream exs("carmodeldata.dat",ios::binary|ios::in);
while(!exs.eof())
{
exs.read((char*)&cms,sizeof(cms));
 if(cms.carno==1040)
 {
 cms.showcars();
 exs.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 95.15 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b3;
b3=getch();
if(b3=='1')
{
delay(1000);
cleardevice();
clrscr();
cars1();

}
else if(b3=='y'||b3=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars14();
}

}


void cars11()
{
outtextxy(100,70,"     E 250 CDI AVANTGARDE");
cout<<"\n\n\n\n\n\n\n\n";
ifstream ixs("carmodeldata.dat",ios::binary|ios::in);
while(!ixs.eof())
{
ixs.read((char*)&cms,sizeof(cms));
if(cms.carno==1010)
{
cms.showcars();
ixs.close();
break;
}
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 51.81 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b4;
b4=getch();
if(b4=='1')
{
delay(1000);
cleardevice();
clrscr();
cars1();

}
else if(b4=='y'||b4=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars11();
}


}

void cars21()
{
outtextxy(100,70,"    B 200 CDI");
cout<<"\n\n\n\n\n\n\n\n";
ifstream lxs("carmodeldata.dat",ios::binary|ios::in);
while(!lxs.eof())
{
lxs.read((char*)&cms,sizeof(cms));
if(cms.carno==2010)
{
cms.showcars();
lxs.close();
break;
}
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 30.45 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b5;
b5=getch();
if(b5=='1')
{
delay(1000);
cleardevice();
clrscr();
cars2();

}
else if(b5=='y'||b5=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars21();
}



}

void cars22()
{
outtextxy(100,70,"     B 180");
cout<<"\n\n\n\n\n\n\n\n";

ifstream fxs("carmodeldata.dat",ios::binary|ios::in);
while(!fxs.eof())
{
fxs.read((char*)&cms,sizeof(cms));
 if(cms.carno==2020)
 {
 cms.showcars();
 fxs.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 29.45 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b6;
b6=getch();
if(b6=='1')
{
delay(1000);
cleardevice();
clrscr();
cars2();

}
else if(b6=='y'||b6=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars22();
}



}

void cars31()
{
outtextxy(100,70,"    A180");
cout<<"\n\n\n\n\n\n\n\n";
ifstream lxs("carmodeldata.dat",ios::binary|ios::in);
while(!lxs.eof())
{
lxs.read((char*)&cms,sizeof(cms));
if(cms.carno==3010)
{
cms.showcars();
lxs.close();
break;
}
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 27.89 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b7;
b7=getch();
if(b7=='1')
{
delay(1000);
cleardevice();
clrscr();
cars3();

}
else if(b7=='y'||b7=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars31();
}



}

void cars32()
{
outtextxy(100,70,"     A 200 D");
cout<<"\n\n\n\n\n\n\n\n";

ifstream fxl("carmodeldata.dat",ios::binary|ios::in);
while(!fxl.eof())
{
fxl.read((char*)&cms,sizeof(cms));
 if(cms.carno==3020)
 {
 cms.showcars();
 fxl.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 28.45 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b8;
b8=getch();
if(b8=='1')
{
delay(1000);
cleardevice();
clrscr();
cars3();

}
else if(b8=='y'||b8=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars32();
}



}

void cars41()
{
outtextxy(100,70,"     CLA SSG 63");
cout<<"\n\n\n\n\n\n\n\n";

ifstream lxl("carmodeldata.dat",ios::binary|ios::in);
while(!lxl.eof())
{
lxl.read((char*)&cms,sizeof(cms));
 if(cms.carno==4010)
 {
 cms.showcars();
 lxl.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 70.90 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b9;
b9=getch();
if(b9=='1')
{
delay(1000);
cleardevice();
clrscr();
cars4();

}
else if(b9=='y'||b9=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars41();
}



}

void cars42()
{
outtextxy(100,70,"     CLA 200 CDI STYLE");
cout<<"\n\n\n\n\n\n\n\n";

ifstream lxk("carmodeldata.dat",ios::binary|ios::in);
while(!lxk.eof())
{
lxk.read((char*)&cms,sizeof(cms));
 if(cms.carno==4020)
 {
 cms.showcars();
 lxk.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 31.61 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b10;
b10=getch();
if(b10=='1')
{
delay(1000);
cleardevice();
clrscr();
cars4();

}
else if(b10=='y'||b10=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars42();
}



}

void cars43()
{
outtextxy(100,70,"     CLA 200 CDI SPORTS");
cout<<"\n\n\n\n\n\n\n\n";

ifstream ljk("carmodeldata.dat",ios::binary|ios::in);
while(!ljk.eof())
{
ljk.read((char*)&cms,sizeof(cms));
 if(cms.carno==4030)
 {
 cms.showcars();
 ljk.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 34.90 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b11;
b11=getch();
if(b11=='1')
{
delay(1000);
cleardevice();
clrscr();
cars4();

}
else if(b11=='y'||b11=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars43();
}



}

void cars44()
{
outtextxy(100,70,"     CLA 200 CDI ");
cout<<"\n\n\n\n\n\n\n\n";

ifstream ljq("carmodeldata.dat",ios::binary|ios::in);
while(!ljq.eof())
{
ljq.read((char*)&cms,sizeof(cms));
 if(cms.carno==4040)
 {
 cms.showcars();
 ljq.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 33.87 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b12;
b12=getch();
if(b12=='1')
{
delay(1000);
cleardevice();
clrscr();
cars4();

}
else if(b12=='y'||b12=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars44();
}



}

void cars51()
{
outtextxy(100,70,"     GLS 350 D 4 MATIC ");
cout<<"\n\n\n\n\n\n\n\n";

ifstream hjq("carmodeldata.dat",ios::binary|ios::in);
while(!hjq.eof())
{
hjq.read((char*)&cms,sizeof(cms));
 if(cms.carno==5040)
 {
 cms.showcars();
 hjq.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 79.78 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b13;
b13=getch();
if(b13=='1')
{
delay(1000);
cleardevice();
clrscr();
cars5();

}
else if(b13=='y'||b13=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars51();
}



}



void cars52()
{
outtextxy(100,70,"     SLC 43 AMG ");
cout<<"\n\n\n\n\n\n\n\n";

ifstream hjk("carmodeldata.dat",ios::binary|ios::in);
while(!hjk.eof())
{
hjk.read((char*)&cms,sizeof(cms));
 if(cms.carno==5020)
 {
 cms.showcars();
 hjk.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 1.79 CR");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b14;
b14=getch();
if(b14=='1')
{
delay(1000);
cleardevice();
clrscr();
cars5();

}
else if(b14=='y'||b14=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars52();
}



}


void cars61()
{
outtextxy(100,70,"     S 500 COUPEE ");
cout<<"\n\n\n\n\n\n\n\n";

ifstream hsq("carmodeldata.dat",ios::binary|ios::in);
while(!hsq.eof())
{
hsq.read((char*)&cms,sizeof(cms));
 if(cms.carno==6010)
 {
 cms.showcars();
 hsq.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 2.63 CR");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b16;
b16=getch();
if(b16=='1')
{
delay(1000);
cleardevice();
clrscr();
cars6();

}
else if(b16=='y'||b16=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars61();
}



}



void cars62()
{
outtextxy(100,70,"     S 350 CDI ");
cout<<"\n\n\n\n\n\n\n\n";

ifstream hjr("carmodeldata.dat",ios::binary|ios::in);
while(!hjr.eof())
{
hjr.read((char*)&cms,sizeof(cms));
 if(cms.carno==6020)
 {
 cms.showcars();
 hjr.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 2.66 CR");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b15;
b15=getch();
if(b15=='1')
{
delay(1000);
cleardevice();
clrscr();
cars6();

}
else if(b15=='y'||b15=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars62();
}



}


void cars71()
{
outtextxy(100,70,"     MAYBACH S 500  ");
cout<<"\n\n\n\n\n\n\n\n";

ifstream psq("carmodeldata.dat",ios::binary|ios::in);
while(!psq.eof())
{
psq.read((char*)&cms,sizeof(cms));
 if(cms.carno==7010)
 {
 cms.showcars();
 psq.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 8.90 CR");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b17;
b17=getch();
if(b17=='1')
{
delay(1000);
cleardevice();
clrscr();
cars7();

}
else if(b17=='y'||b17=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars71();
}



}



void cars72()
{
outtextxy(100,70,"     MAYBACH S 600 GUARD ");
cout<<"\n\n\n\n\n\n\n\n";

ifstream hjw("carmodeldata.dat",ios::binary|ios::in);
while(!hjw.eof())
{
hjw.read((char*)&cms,sizeof(cms));
 if(cms.carno==7020)
 {
 cms.showcars();
 hjw.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 10.50 CR");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b18;
b18=getch();
if(b18=='1')
{
delay(1000);
cleardevice();
clrscr();
cars7();

}
else if(b18=='y'||b18=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars72();
}



}


void cars81()
{
outtextxy(100,70,"     C 63 S AMG");
cout<<"\n\n\n\n\n\n\n\n";

ifstream Qxl("carmodeldata.dat",ios::binary|ios::in);
while(!Qxl.eof())
{
Qxl.read((char*)&cms,sizeof(cms));
 if(cms.carno==8010)
 {
 cms.showcars();
 Qxl.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 1.33 CR");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b19;
b19=getch();
if(b19=='1')
{
delay(1000);
cleardevice();
clrscr();
cars8();

}
else if(b19=='y'||b19=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars81();
}



}

void cars82()
{
outtextxy(100,70,"     C 200 CGI");
cout<<"\n\n\n\n\n\n\n\n";

ifstream lxP("carmodeldata.dat",ios::binary|ios::in);
while(!lxP.eof())
{
lxP.read((char*)&cms,sizeof(cms));
 if(cms.carno==8020)
 {
 cms.showcars();
 lxP.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 45.20 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b20;

b20=getch();
if(b20=='1')
{
delay(1000);
cleardevice();
clrscr();
cars8();

}
else if(b20=='y'||b20=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars82();
}



}

void cars83()
{
outtextxy(100,70,"     C 220 CDI AVANTGARDE");
cout<<"\n\n\n\n\n\n\n\n";

ifstream Vjk("carmodeldata.dat",ios::binary|ios::in);
while(!Vjk.eof())
{
Vjk.read((char*)&cms,sizeof(cms));
 if(cms.carno==8030)
 {
 cms.showcars();
 Vjk.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 42.40 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b21;
b21=getch();
if(b21=='1')
{
delay(1000);
cleardevice();
clrscr();
cars8();

}
else if(b21=='y'||b21=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars83();
}



}

void cars84()
{
outtextxy(100,70,"     C 220 CDI STYLE");
cout<<"\n\n\n\n\n\n\n\n";

ifstream lDq("carmodeldata.dat",ios::binary|ios::in);
while(!lDq.eof())
{
lDq.read((char*)&cms,sizeof(cms));
 if(cms.carno==8040)
 {
 cms.showcars();
 lDq.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 39.63 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b22;
b22=getch();
if(b22=='1')
{
delay(1000);
cleardevice();
clrscr();
cars8();

}
else if(b22=='y'||b22=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars84();
}



}




void cars91()
{
outtextxy(100,70,"     GLE 450 AMG COUPE");
cout<<"\n\n\n\n\n\n\n\n";

ifstream Txl("carmodeldata.dat",ios::binary|ios::in);
while(!Txl.eof())
{
Txl.read((char*)&cms,sizeof(cms));
 if(cms.carno==9010)
 {
 cms.showcars();
 Txl.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 5.66 CR");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b23;
b23=getch();
if(b23=='1')
{
delay(1000);
cleardevice();
clrscr();
cars9();

}
else if(b23=='y'||b23=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars91();
}



}

void cars92()
{
outtextxy(100,70,"     GLA 200 CDI STYLE");
cout<<"\n\n\n\n\n\n\n\n";

ifstream lVP("carmodeldata.dat",ios::binary|ios::in);
while(!lVP.eof())
{
lVP.read((char*)&cms,sizeof(cms));
 if(cms.carno==9020)
 {
 cms.showcars();
 lVP.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 32.75 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b24;
b24=getch();
if(b24=='1')
{
delay(1000);
cleardevice();
clrscr();
cars9();

}
else if(b24=='y'||b24=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars92();
}



}

void cars93()
{
outtextxy(100,70,"     GLA 200 CDI SPORT");
cout<<"\n\n\n\n\n\n\n\n";

ifstream VjZ("carmodeldata.dat",ios::binary|ios::in);
while(!VjZ.eof())
{
VjZ.read((char*)&cms,sizeof(cms));
 if(cms.carno==9030)
 {
 cms.showcars();
 VjZ.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 36.90 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b25;
b25=getch();
if(b25=='1')
{
delay(1000);
cleardevice();
clrscr();
cars9();

}
else if(b25=='y'||b25=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars93();
}



}

void cars94()
{
outtextxy(100,70,"     GLA 45 AMG 4 MATIC");
cout<<"\n\n\n\n\n\n\n\n";

ifstream FDq("carmodeldata.dat",ios::binary|ios::in);
while(!FDq.eof())
{
FDq.read((char*)&cms,sizeof(cms));
 if(cms.carno==9040)
 {
 cms.showcars();
 FDq.close();
 break;
 }
}
outtextxy(20,390,"AVG. EX-SHOWROOM PRICE  : 73.40 LAKHS");
settextstyle(3,0,2);
outtextxy(30,440,"PRESS Y : TO BUY THE CAR");
outtextxy(400,80,"Press 1 : BACK");
char b26;
b26=getch();
if(b26=='1')
{
delay(1000);
cleardevice();
clrscr();
cars9();

}
else if(b26=='y'||b26=='Y')
{
   buy();
}
else
{
clrscr();
cleardevice();
error();
delay(1000);
cleardevice();
cars94();
}



}






void cars1()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"E CLASS");
settextstyle(3,0,2);
outtextxy(100,240," A . E 250 CDI AVANTGARDE");
outtextxy(100,270," B . E 250 EDITION E");
outtextxy(100,300," C . E 200 CGI");
outtextxy(100,330," D . E 400 CABRIOLET");
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs1;
cs1=getch();
switch(cs1)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars12();
break;


case 'c':
case 'C':
clrscr();
cleardevice();
cars13();
break;


case 'D':
case 'd':

clrscr();
cleardevice();
cars14();
break;


case 'A':
case 'a':
clrscr();
cleardevice();
cars11();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars1();
	break;

}
}
void cars2()
{
cleardevice();
clrscr();
     settextstyle(7,0,4);
outtextxy(200,150,"B CLASS");
settextstyle(3,0,2);

outtextxy(100,300," A . B 200 CDI");
outtextxy(100,330," B . B 180 ");
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs2;
cs2=getch();
switch(cs2)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars22();
break;





case 'A':
case 'a':
clrscr();
cleardevice();
cars21();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars2();
	break;

}

}

void cars3()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"A CLASS");
settextstyle(3,0,2);
outtextxy(100,240," A . A 180 ");
outtextxy(100,270," B . A 200 D");

outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs3;
cs3=getch();
switch(cs3)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars32();
break;





case 'A':
case 'a':
clrscr();
cleardevice();
cars31();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars3();
	break;

}


}

void cars4()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"CLA");
settextstyle(3,0,2);
outtextxy(100,240," A . CLA SSG 63");
outtextxy(100,270," B . CLA 200 CDI STYLE");
outtextxy(100,300," C . CLA 200 CDI SPORTS");
outtextxy(100,330," D . CLS 200 CDI");
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs4;
cs4=getch();

switch(cs4)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars42();
break;


case 'c':
case 'C':
clrscr();
cleardevice();
cars43();
break;


case 'D':
case 'd':

clrscr();
cleardevice();
cars44();
break;


case 'A':
case 'a':
clrscr();
cleardevice();
cars41();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars4();
	break;

}



}

void cars5()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"CLS");
settextstyle(3,0,2);
outtextxy(100,240," A . GLS 350 D 4 MATIC");
outtextxy(100,270," B . SLC 43 AMG");

outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs5;
cs5=getch();
switch(cs5)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars52();
break;





case 'A':
case 'a':
clrscr();
cleardevice();
cars51();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars5();
	break;

}


}

void cars6()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"S CLASS");
settextstyle(3,0,2);
outtextxy(100,240," A . S 500 COUPEE");
outtextxy(100,270," B . S 350 CDI");
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs6;
cs6=getch();

switch(cs6)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars62();
break;





case 'A':
case 'a':
clrscr();
cleardevice();
cars61();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars6();
	break;

}





}

void cars7()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"MAYBACH");
settextstyle(3,0,2);
outtextxy(100,240," A . MAYBACH S 500");
outtextxy(100,270," B . MAYBACH S 600 GUARD");
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs7;
cs7=getch();
switch(cs7)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars72();
break;





case 'A':
case 'a':
clrscr();
cleardevice();
cars71();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars7();
	break;

}




}

void cars8()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"C CLASS");
settextstyle(3,0,2);
outtextxy(100,240," A . C 63 S AMG");
outtextxy(100,270," B . C 200 CGI");
outtextxy(100,300," C . C 220 CDI AVANTGARDE");
outtextxy(100,330," D . C 220 CDI STYLE");
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs8;
cs8=getch();
switch(cs8)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars82();
break;


case 'c':
case 'C':
clrscr();
cleardevice();
cars83();
break;


case 'D':
case 'd':

clrscr();
cleardevice();
cars84();
break;


case 'A':
case 'a':
clrscr();
cleardevice();
cars81();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars8();
	break;

}




}

void cars9()
{
cleardevice();
clrscr();
settextstyle(7,0,4);
outtextxy(200,150,"GLA");
settextstyle(3,0,2);
outtextxy(100,240," A . GLE 450 AMG COUPE");
outtextxy(100,270," B . GLA 200 CDI STYLE");
outtextxy(100,300," C . GLA 200 CDI SPORT");
outtextxy(100,330," D . GLA 45 AMG 4 MATIC");
outtextxy(400,80,"Press 1 : BACK");
outtextxy(400,100,"Press 2 : Main Menu");
char cs9;
cs9=getch();
switch(cs9)
{
case '1':
delay(1000);
cleardevice();
clrscr();
carselect();
delay(2000);
break;
case '2':
clrscr();
cleardevice();
menu();
break;

case 'b':
case 'B':
clrscr();
cleardevice();
cars92();
break;


case 'c':
case 'C':
clrscr();
cleardevice();
cars93();
break;


case 'D':
case 'd':

clrscr();
cleardevice();
cars94();
break;


case 'A':
case 'a':
clrscr();
cleardevice();
cars91();
break;

default :

	cleardevice();
	clrscr();
	error();
	cars9();
	break;

}





}

void carselect()
{
setbkcolor(8);
settextstyle(7,0,3);
outtextxy(180,200,"MODELS");
settextstyle(3,0,2);
outtextxy(100,240," 1 . E CLASS");
outtextxy(100,270," 2 . B CLASS");
outtextxy(100,300," 3 . A CLASS");
outtextxy(100,330," 4 . CLA");
outtextxy(100,360," 5 . CLS");
outtextxy(280,240," 6 . S CLASS");
outtextxy(280,270," 7 . MAYBACH");
outtextxy(280,300," 8 . C CLASS");
outtextxy(280,330," 9 . GLA ");
outtextxy(400,50,"Press B : BACK");

char ms;
ms=getch();
if(ms=='1')
{
cleardevice();
cars1();
}
else if(ms=='2')
{
cleardevice();
cars2();
}

else if(ms=='3')
{
cleardevice();
cars3();
}

else if(ms=='4')
{
cleardevice();
cars4();
}

else if(ms=='5')
{
cleardevice();
cars5();
}

else if(ms=='6')
{
cleardevice();
cars6();
}

else if(ms=='7')
{
cleardevice();
cars7();
}

else if(ms=='8')
{
cleardevice();
cars8();
}

else if(ms=='9')
{
cleardevice();
cars9();
}
else if(ms=='b')
{
cleardevice();
menu();
}
else
{
cleardevice();
clrscr();
error();
delay(1000);
cleardevice();
clrscr();
carselect();
}
delay(4000);

}
void thanks()
{
cleardevice();
clrscr();
settextstyle(7,0,6);
outtextxy(180,200,"THANKS !!");
settextstyle(3,0,3);
outtextxy(180,260,"FOR VISITING OUR SITE");
delay(4000);
exit(0);

}
void menu()
{
   int driver = DETECT,mode;
   char p;

initgraph(&driver,&mode,"c:\\tc\\bgi");
cleardevice();
setbkcolor(1);

mersign();
delay(1200);
settextstyle(3,0,2);
outtextxy(120,240,"Press 1 : to know about  Mercedes - Benz");
delay(1200);
outtextxy(120,270,"Press 2 : for Model Selection ");
delay(1200);


outtextxy(120,330,"Press 3 : for LOG OUT YOUR I'D");
delay(1200);
outtextxy(120,360,"Press 4 : for EXIT FROM THE SITE");

p=getch();
if(p=='1')
{
merbenz();
clrscr();
cleardevice();
menu();
}
else if(p=='2')
{
cleardevice();
mersign();
delay(2000);
carselect();
}
else if(p=='3')
{
setbkcolor(4);
cleardevice();
setlinestyle(2,3,5);
line(65,180,300,180);
line(65,330,65,180);
line(65,330,300,330);
line(300,330,300,180);
line(65,285,300,285);
settextstyle(3,0,2);
outtextxy(100,200,"LOG OUT");
settextstyle(8,0,2);
outtextxy(120,250,"Log out now ?");
settextstyle(6,0,2);
outtextxy(70,290,"CANCEL(N)");
outtextxy(170,290,"LOUGOUT(Y)");
char q;
q=getch();
if(q=='Y'||q=='y')
{
arcd();
setbkcolor(9);
outtextxy(120,400,"YOU HAVE SUCCESSFULLY LOGGED OUT YOUR I'D");
delay(4000);
closegraph();

login();
}
else
{
menu();
}
}
else if(p=='4')
{
thanks();
}
else
{
cleardevice();
error();
menu();
}
}
int uid,kpj=0;




class account
{
public:
   char fname[30],lname[30],country[30],state[30],emid[50],pass[20],repass[20];
   int userid;
       void password()
       {


	char c;
	int j=0;
	char i;
	c=getch();
	cout<<"*";
	pass[j]=c;
	i=c;
	while(1)
	{
	c=getch();
	if(c==13)
	{
	 break;
	}

	cout<<"*";
	pass[++j]=c;

	}
	cout<<endl;
	cout<<"\n\n\t\tRe-Enter your password\n";
	c=getch();
	cout<<"*";
	j=0;
	repass[j]=c;
	i=c;
	while(1)
	{
	c=getch();
	if(c==13)
	{
	 break;
	}

	cout<<"*";
	repass[++j]=c;

	}
	cout<<endl;
	int ln1=strlen(pass);
	int ln2=strlen(repass);

	for(int z=0;z<ln1;z++)
	{
       if(pass[z]!=repass[z])
       break;
	}

	if(z==ln1)
	{   clrscr();
	   kpj=1;
	cout<<"\n\n\n\n\n\n\t\tPlz wait Redirecting";
	for(int j=0;j<8;++j)
	{
	sleep(1);
	cout<<".";
	}
	cout<<"\n\n\n\n\t\tACCOUNT CREEATED SUCCESSFULLY !!!!";


	randomize();

	uid=1000*random(9)+50+random(100)-random(20);
	userid=uid;
	cout<<"\n\n\n\n\t\tYOUR USERID IS \t:\t"<<userid;
	cout<<"\n\n\n\n\n\t****  REMEMBER YOUR ID TO LOG IN TO YOUR ACCOUNT LATER  ****";

	delay(6000);

	}

	else if(kpj!=1)
	{
	clrscr();
	cc++;
	cout<<"\n\n\t\tPlz wait Redirecting";
	for(int j=0;j<8;++j)
	{
	sleep(1);
	cout<<".";
	}

	cout<<"\n\n\n\n\n\n\n\t\t\tPASSWORD MISMATCHES!!!!";

	delay(3000);
	clrscr();
	if(cc<2)
	{
	cout<<"\n\n\t\tRE-ENTER YOUR PASSWORD \n";
	password();
	}
	else
	{
	c=0;
	login();
	}
	}
       }
       void acc();
       void display();
}s;
void account::display()
{
cout<<"\n\n\n\n\n\n\n\n\n\t\t\tHELLO \t";
cout<<fname;
}

void account::acc()
{
 cout<<"\n\n\n\tFIRST NAME\t:\t";
 gets(fname);
 cout<<"\n\n\tLAST NAME\t:\t";
 gets(lname);
 cout<<"\n\n\tCOUNTRY  \t:\t";
 gets(country);
 cout<<"\n\n\tSTATE    \t:\t";
 gets(state);
 cout<<"\n\n\tEMAIL ID \t:\t";
 gets(emid);
 cout<<"\n\n\tEnter your PASSWORD"<<endl;
 password();


}

void createnew()
{

	    clrscr();
s.acc();
ofstream o("acclogin.dat",ios::binary|ios::app);
o.write((char*)&s,sizeof(s));
o.close();
if(kpj=1)
menu();

}

char pss[20];
char c,i;
int j=0,zz=0,ll=0,kk=1,ssg=15;
int pass2()
{

ll=0;


	j=0;
	c=getch();
	cout<<"*";
	pss[j]=c;
	i=c;
	while(1)
	{
	c=getch();
	if(c==13)
	{
	 break;
	}

	cout<<"*";
	pss[++j]=c;

	}
	cout<<endl;
	for(int z=0;z<=j;z++)
	{
       if(pss[z]!=s.pass[z])
       break;
	}
	if(z>j)
	{   clrscr();
	 ll++;
	cout<<"\n\n\n\n\n\n\t\tPlz wait Redirecting";
	for(int j=0;j<8;++j)
	{
	sleep(1);
	cout<<".";
	}



	}

	if(ll==1)
	{
	clrscr();
	s.display();
	 ssg=0;
	delay(4000);
	clrscr();

	}
	else
	{
	clrscr();
	zz++;
	cout<<"\n\n\t\tPlz wait Redirecting";
	for(int j=0;j<8;++j)
	{
	sleep(1);
	cout<<".";
	}

	cout<<"\n\n\n\n\n\n\n\t\t\tPASSWORD MISMATCHES!!!!";

	delay(3000);
	if(zz!=2)
	{
	clrscr();
	cout<<"\n\n\n\n\t\tRE-ENTER YOUR PASSWORD\n\t\t";
	pass2();

	return(0);
	}
	else
	{
	clrscr();
	zz=0;
	login();
	}
	}

}
void existing()
{
kk=1;
ssg=15;
clrscr();
cout<<"\n\n\t\tUSERID\t:\t ";

int usid;
cin>>usid;


ifstream ifs("acclogin.dat",ios::binary|ios::in);
while(!ifs.eof())
{
ifs.read((char*)&s,sizeof(s));
if(usid==s.userid)
{
 cout<<"\n\n\t\tPASSWORD\t:\t";
int r=pass2();
kk=1;
break;
}
else
{
kk=5;
}
}

ifs.close();
if(ssg==0)
{
menu();
}
if(kk!=1)
{
cout<<"\n\n\n\n\n\n\t\tUSER ID DOES NOT EXISTS!!!!"<<endl;
delay(4000);
clrscr();
login();
}
}


 void login()
{
char choice;

textcolor(12);
clrscr();
cout<<"\n\n\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
cout<<"\n           @\t\tPRESS 1 : TO LOG IN WITH EXISTING ACCOUNT  @"<<endl;
cout<<"\n           @\t\tPRESS 2 : TO CREATE A NEW ACCOUNT          @"<<endl;
cout<<"\n           @\t\tPRESS 3 : BACK ON THE PREVIOUS PAGE        @"<<endl;
cout<<"\n           @\t\tPRESS 4 : EXIT FROM THE SITE               @"<<endl;
cout<<"\n\n\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

cout<<"\n\n\t<^><^><^><^>    ENTER YOUR CHOICE    <^><^><^><^>\n\n\n\t\t\t";
cin>>choice;

switch(choice)
{
	case '1':
		existing();
		break;
	case '2':
		createnew();
		break;
	case '3':
	       car();
	       closegraph();
	       login();
	       break;
	case '4':
		 int driver = DETECT,mode;
		initgraph(&driver,&mode,"c:\\tc\\bgi");
		 thanks();
		 delay(2000);

		 break;
	default :
		 clrscr();
		 cout<<"\n\n\n\n\n\n\t\t\t  !!!!  INVALID CHOICE  !!!"<<endl;
		 delay(3000);
		 clrscr();
		 login();

}
}



void car()
{
   int driver = DETECT,mode;
initgraph(&driver,&mode,"c:\\tc\\bgi");
int c=12;
setbkcolor(0);
setlinestyle(0,1,2);
int t;
while(1)
{

settextstyle(2,0,5);

outtextxy(30,10,"Press H for HRON");
outtextxy(30,30,"Press L & T for some Effects");
outtextxy(30,50,"Press C to continue");
outtextxy(30,70,"Press E to Exit");
settextstyle(7,0,5);
outtextxy(300,10,"Mercedes-Benz");
settextstyle(3,0,3);
outtextxy(180,420,"BY : SAHIL GUPTA ");
as:
setcolor(13);
ellipse(380,127,20,152,130,35);
//////////////////////////////rear//////////////////////////
circle(130,200,10);
arc(130,220,130,45,5);
line(130,200,130,190);
line(130,200,138,207);
line(130,200,123,207);
line(132,220,133,210);
line(128,220,127,210);
line(490,109,560,142);
line(560,142,569,142);
line(569,142,582,102);
line(582,102,620,92);
line(593,132,617,125);

line(617,124,627,96);
line(620,92,628,97);

line(472,86,602,96);
line(501,113,575,121);
line(443,77,475,80);

line(443,77,432,93);
line(475,80,472,85);

   line(593,132,593,137);
   line(593,137,600,141);
   line(600,141,600,185);
   line(600,185,608,192);
   line(608,192,608,234);
   line(608,234,586,253);
    line(586,253,577,248);

/////////////////////////           mirror
   line(263,112,363,127);
      line(193,160,263,112);
   line(193,160,220,170);
      line(220,170,280,180);
      line(280,180,320,185);
      line(320,185,363,127);
////////////////////////////////sidemirror
line(340,194,460,169);
 line(460,169,519,152);

ellipse(512,144,300,30,10,10);
ellipse(467,143,28,100,50,30);
line(510,128,521,138);
line(435,116,440,171);

//   setcolor(4);
////////////////////////////////////////cont//
   line(339,194,372,144);
//    line(372,140,386,128);
ellipse(454,208,87,123,128,95);
line(372,144,384,128);
   int b,x,y;
////////////////////////lower
line(365,298,524,264);
line(365,298,330,310);
line(330,310,323,310);


///////////////////////////////bumper
ellipse(162,221,135,190,90,40);
line(96,193,140,174);
line(140,174,160,168);
line(160,168,192,161);

//////////////////////front
ellipse(75,246,95,190,18,18);
line(57,251,57,286);
//setcolor(4);
ellipse(181,178,232,263,200,137);
ellipse(195,180,256,286,200,137);


ellipse(191,171,228,247,200,100);
ellipse(231,198,234,275,200,80);

//setcolor(9);
//ellipse(195,170,256,286,200,137);
//setcolor(12);

ellipse(196,167,228,246,200,90);
ellipse(231,184,234,276,200,80);


ellipse(191,200,228,246,200,90);
ellipse(228,218,234,276,200,80);

ellipse(258,268,180,220,200,40);
ellipse(178,296,244,355,16,10);

ellipse(238,249,227,250,200,60);


/////////////wheel1
ellipse(302,281,320,77,26,45);
ellipse(290,277,65,162,40,45);
ellipse(278,288,144,212,31,45);

/////////////wheel2
//setcolor(5);
ellipse(302+260,229,328,87,26,45);
ellipse(290+280-7,277-50+2,90,162,40,45);
ellipse(278+270,288-50,144,215,27,45);
 b=0;
int v=0;

/////////
ellipse(302+250+v,227+b,295,90,29,41);
ellipse(302+234+v,231+b,245,306,50,40);
//setlinestyle(3,0,3);
ellipse(302+248+v,229+b,0,360,21,30);

ellipse(302+247+v,229+b,0,360,8,10);
setfillstyle(6,11);
//floodfill(302+248+v,230+b,13);
//line(546,201,546,257);
//line(554,201,554,257);
//setcolor(4);

line(546+v,201+b,546+v,220+b);
line(551+v,201+b-2,551+v,220+b);

line(546+v,238+b,546+v,257+b);
line(551+v,238+b+2,551+v,257+b+2);


line(530+v,225+b,541+v,225+b);
line(530+v,230+b,541+v,230);

line(557+v,225+b,570+v,225+b);
line(557+v,230+b,570+v,230+b);



line(563+v,206+b,552+v,222+b);
line(534+v,246+b,543+v,232+b);

line(566+v,210+b,556+v,223+b);
line(536+v,250+b,544+v,238+b);

line(536+v,207+b,546+v,222+b);
line(532+v,213+b,542+v,224+b);

line(556+v,235+b,566+v,247+b);
line(551+v,237+b,563+v,253+b);



////////////////////////////////////////////////////
v=-260;
b=56;
ellipse(302+233+v,221+b,260,60,49,51);
//ellipse(302+234+v,231+b,245,306,50,40);
//setlinestyle(3,0,3);
ellipse(302+243+v,224+b,0,360,28,35);
//  line(249,328,269,328);
ellipse(300+245+v,223+b,0,360,10,12);

ellipse(285+249+v,239+b,210,260,30,33);
//floodfill(285+258+v,230+b,12);
b=45;
v=v-4;
line(546+v,201+b,546+v,220+b+2);
line(551+v,201+b,551+v,220+b+2);
b=b+8;
line(546+v,238+b,546+v,257+b+4);
line(551+v,238+b,551+v,257+b+4);
v=v-2;
line(530+v-6,225+b,541+v,225+b);
line(530+v-6,230+b,541+v,230+b);
v=v+5;
line(557+v,225+b,570+v+3,225+b);
line(557+v-1,230+b,570+v+3,230+b);


b=b-5;
v=v-5;
line(565+v+3,206+b,552+v+4,222+b-2);
b=b+15;

line(534+v,246+b,543+v+3,232+b-5);
b=b-10;
line(566+v+7,210+b-5,556+v+4,220+b);
line(536+v-5,250+b,544+v-2,238+b-4);


line(536+v,207+b-8,545+v,222+b-5);
line(531+v,212+b-8,542+v,224+b-2);

line(556+v,235+b,566+v+3,247+b+5);
line(551+v,237+b,563+v+2,253+b+3);

///////////////////lights
ellipse(199,250,144,345,18,8);
line(185,245,206,230);
//setcolor(4);
ellipse(223,234,340,110,8,5);
line(230,237,217,252);
line(206,230,220,229);
//setfillstyle(1,4);

//floodfill(200,240,12);

/////////////////////////////////////
line(90,223,152,236);
line(152,236,137,254);
line(90,223,90,242);

//setfillstyle(10,9);
//floodfill(91,230,14);
ellipse(240,270,104,136,100,60);
ellipse(185,237,120,160,100,60);
ellipse(80,221,357,134,10,10);

line(152,236,168,228);
///////////////////////////////////////////////
line(435,116,440,171);
//////////////////////////////////////////hp
//line(134,185,220,210);
line(134,185,196,160);
line(214,212,318,185);
/////////////////////////////////////////////////light

//setcolor(14);
ellipse(166,247,99,330,8,8);
ellipse(171,243,310,129,7,7);
putpixel(174,250,13);
putpixel(173,251,13);
putpixel(164,239,13);
putpixel(165,238,13);

/////////////////////////////////////////road/////////////////////
setcolor(13);
line(1,430,639,300);
line(1,445,639,315);

line(1,210,93,194);
line(1,195,194,158);

//line(1,170,639,71);
//line(1,170,229,135);
line(520,90,639,71);
line(478,86,639,56);

   int c=0;

   line(10,194+c,10,208+c);
line(40,189+c,40,204+c);
line(70,183+c,70,198+c);
line(100,176+c,100,190+c);
line(130,170+c,130,177+c);
line(160,166+c,160,168+c);
line(190,160+c,190,161+c);

 line(190+330,78+c,190+330,89+c);

line(190+360,72+c,190+360,85+c);
line(190+390,67+c,190+390,81+c);
line(190+420,62+c,190+420,76+c);
line(190+449,57+c,190+449,71+c);



   c=236;

line(10,192+c,10,208+c);
line(40,189+c-2,40,204+c-3);
line(70,183+c-3,70,198+c-3);
line(100,176+c-2,100,190+c-2);
line(130,170+c-2,130,177+c+5);
line(160,166+c-3,160,168+c+8);
line(190,160+c-4,190,161+c+9);

line(190+30,156+c-5,190+30,170+c-5);


line(190+30+30,156+c-12,190+30+30,170+c-12);

line(190+90,156+c-18,190+90,170+c-17);

line(190+120,156+c-25,190+120,170+c-25);

line(190+150,156+c-30,190+150,170+c-30);

line(190+180,156+c-37,190+180,170+c-36);


line(190+210,156+c-42,190+210,170+c-42);


line(190+240,156+c-48,190+240,170+c-48);


line(190+270,156+c-55,190+270,170+c-54);


line(190+300,156+c-61,190+300,170+c-61);



 line(190+330,78+c+10,190+330,89+c+13);

line(190+360,72+c+11,190+360,85+c+13);
line(190+390,67+c+10,190+390,81+c+10);
line(190+420,62+c+8,190+420,76+c+10);
line(190+449,57+c+8,190+449,71+c+8);




/////////////////road

setcolor(12);          /////////////////////////////1

line(1,310,25,306);
line(6,318,30,315);
line(1,310,6,318);
line(25,306,30,314);
int k,m;
k=13*45+19;
m=16*(-8);
						    //2
setcolor(12);

line(605,310-128,629,306-128);
line(610,318-128,634,315-128);
line(605,310-128,610,318-128);
line(629,306-128,634,314-128);

setcolor(12);    //////////////////////////////////3
k=45;
m=-8;
line(46,302,70,298);
line(51,310,75,307);
line(46,302,51,310);
line(70,298,75,306);


setfillstyle(1,0);
floodfill(64,303,12);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,14);
floodfill(64,303,12);

t=getch();

if(t=='c')
break;
if(t=='e')
{
	 thanks();
		 delay(2000);

exit(0);
}
if(t=='h')
{
sound(710);
delay(500);
nosound();

}
if(t=='t')
{
while(!kbhit())
{
setfillstyle(1,0);
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);

setfillstyle(1,random(12));

floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);


 }

setfillstyle(1,0);

floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);

	}


if(t=='l')
{
while(!kbhit())
{

delay(120);
setfillstyle(6,0);         //////////////////////////ty
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);

setfillstyle(1,0);
floodfill(64,303,12);

///////////////////////////////////road

setfillstyle(9,0);       /////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);


//////////////////////
floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);




setfillstyle(6,14); //////////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
////////////////////////////////////////road

setfillstyle(9,10);///////////////////////////////////color
floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
//////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

///////////////////////////////////////
setfillstyle(10,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);
///light
setfillstyle(6,11);                             ///////////

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

delay(120);

setfillstyle(6,0);/////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
/////////////////////////////////////road
setfillstyle(9,0);      ///////////////color

floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
///////////////////////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);
/////////////////////////////
setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(6,10);            /////////////ty

floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
////////////////////////////////////////////////road
setfillstyle(9,14);/////////////////////////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);
/////////////////////////////////////////

floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);
setfillstyle(1,14);
floodfill(64,303,12);

setfillstyle(9,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);

delay(20);
setfillstyle(1,14);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

 delay(20);
setfillstyle(1,0);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);




}
	  }



}



nosound();

getch();
}
void main()
{
clrscr();
car();
closegraph();

login();
/*cms.cardata();
ofstream ok("carmodeldata.dat",ios::binary|ios::app);
ok.write((char*)&cms,sizeof(cms));
ok.close();*/

getch();
}







