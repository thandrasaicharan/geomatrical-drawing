#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


class data
{
  protected:
    int rad,radx,rady,x,y,h;

};

class circ:public data
{

    public:
	  void getrad()
	  {cout<<"\ninput the radius for circle(example 100)";
	  cout<<"\nthere is a limit (0-250)\n";
	   cin>>rad;
	  }
	void cir();
};

void circ::cir()
{
float pi=3.14;
	      int gdriver = DETECT, gmode, errorcode;
	      int midx, midy;
	      initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	      errorcode = graphresult();
	      if (errorcode != grOk)
	      {
	       printf("Graphics error: %s\n", grapherrormsg(errorcode));
	       printf("Press any key to halt:");
	       getch();
	       exit(1);
	      }

	     midx = getmaxx()/2;
	     midy = getmaxy()/2;
	     setcolor(getmaxcolor());
	      circle(midx, midy, rad);
	      getch();
	      textcolor(3);
	      cout<<"\n\nthe area of the circle is\n";
	      cout<<"a="<<pi<<"*"<<rad<<"*"<<rad<<"="<<pi*rad*rad;
	      delay(150);
	      cout<<"\n\nthe circumference of the circle is\n";
		delay(150);
	      cout<<"2*"<<pi<<"*"<<rad<<"="<<2*pi*rad;
	      delay(150);
	      cout<<"\n\nthe diameter of the circle is\n";
		delay(150);
	      cout<<"d=2*"<<rad<<"="<<2*rad;
	      getch();
}


   class elli:public data
{
		public:
	  void getrad()
	  {
	   cout<<"\ninput the radius for elipse for x axis and y axis\n";
	   cin>>radx>>rady;
	  }
	  void pora();
};

void elli::pora()
{
float pi=3.14;
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle = 0, endangle = 360;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);

   }
   line(getmaxx()/2,0,getmaxx()/2,getmaxy());
   line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
      line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	      line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
   ellipse(midx, midy, stangle, endangle,
       radx, rady);
   getch();
   closegraph();
   cout<<"\n\nthe area of ellipse is\n"<<"a="<<pi<<"*"<<radx<<"*"<<rady<<"=";
   cout<<pi*radx*rady;
   delay(150);
   if(radx>rady)
   {
   cout<<"\n\nthe length of major axis is\n"<<"2*"<<radx<<"=";
   cout<<2*radx;
   delay(150);
   cout<<"\n\nthe length of minor axis is\n"<<"2*"<<rady<<"=";
   cout<<2*rady;
   delay(150);
   cout<<"\n\neccentricity of the ellipse is\n";
   cout<<sqrt(1-((rady)^2)/((radx)^2));
   }
   else if(radx<rady)
   {
   cout<<"\n\nthe length of major axis is\n"<<"2*"<<rady<<"=";
   cout<<2*rady;
   delay(150);
   cout<<"\n\nthe length of minor axis is\n"<<"2*"<<rady<<"=";
   cout<<2*rady;
   delay(150);
   cout<<"\n\neccentricity of the ellipse is\n";
   cout<<sqrt(1-((radx)^2)/((rady)^2));
   }
   getch();
}


class linee:public data
     {
      public:
       void getrad()
       {
	cout<<"\nEnter x & y for line first point\n";
	cin>>x>>y;
	cout<<"\nEnter x & y for line last point\n ";
	cin>>radx>>rady;
	}
       void cross_line();
      };

void linee::cross_line()
{

   int gdriver = DETECT, gmode, errorcode;
   int maxx, maxy;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   line(x,y,radx,rady );
   getch();
   closegraph();
   cout<<"the slope of the line is\n";
   delay(150);
   cout<<"m="<<(rady-y)/(radx-x);
   getch();
}


class conic:public data{
public:
  void getrad()
	  {
	   cout<<"\ninput the angles for conic for 1st angle and 2nd angle\n";
	   cin>>radx>>rady;
	   cout<<"\ninput the radius for conic\n";
	   cin>>rad;
	  }
   void coni();

};


void conic::coni(){
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");


   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

    line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	      line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   setfillstyle(EMPTY_FILL, getmaxcolor());
   pieslice(midx, midy, radx, rady, rad);

   getch();
    closegraph();

}



class arch:public data{
public:
  void getrad()
	  {
	   cout<<"\ninput the angles for arc for 1st angle and 2nd angle\n";
	   cin>>radx>>rady;
	   cout<<"\ninput the radius for arc\n";
	   cin>>rad;
	  }
   void arech();

};


void arch::arech(){
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");


   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   setfillstyle(EMPTY_FILL, getmaxcolor());
   arc(midx, midy, radx, rady, rad);

   getch();
    closegraph();
}


class rect:public data{
public:
       void getrad()
       {
	cout<<"\nEnter left, top,right,bottom for rectangle\n";
	cin>>x>>y>>radx>>rady;
	}
     void rec();
}  ;

void rect::rec(void)
{
int midx,midy;
   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   midx=getmaxx()/2;
   midy=getmaxx()/2;
   rectangle(x,y,radx,rady);
   getch();
   closegraph();
}

void day()
{
 struct date d;
 int i,j;
 clrscr();
 getdate(&d);
 i=d.da_day;
 j=d.da_mon;
 cout<<"\nDATE:"<<i;
 cout<<":"<<j;
 cout<<":"<<d.da_year;
 }
void somoy(){
   int i,j,k;
   struct  time t;

   gettime(&t);
   i=t.ti_hour;
   j=t.ti_min;
   k=t.ti_sec;

   cout<<"\t\t\t\t\t\t\tTIME:"<<i<<":"<<j<<":"<<k<<"\n";

}


int main()
{

 clrscr();
 circ c;
 elli e;
 linee l;
 conic co;
 arch d;
 rect r;
 int a;

 while(1)
 {  textcolor(4);
 cout<<"\n\n\t";
 delay(2000);
 cprintf("");
 day();
 somoy();
 cout<<"\t";
 cprintf("..............WELCOME IN GEOMATRICAL DRAWING............") ;

 delay(1000);
 cout<<endl<<endl;
 cout<<"\nEnter choice:";
 delay(150);
 cout<<"\n1.Circle";
  delay(150);
 cout<<"\n2.Ellipse" ;
  delay(150);
 cout<<"\n3.Line";
  delay(150);
 cout<<"\n4.Conic";
  delay(150);
 cout<<"\n5.Arc";
  delay(150);
 cout<<"\n6.Rectangle";
  delay(150);
 cout<<"\n7.Exit\n";
 cout<<"\nenter your option\n";

 cin>>a;
 clrscr();
 switch(a)
 {
  case 1:
      c.getrad();
      clrscr();
      c.cir();
      break;
  case 2:
     e.getrad();
     clrscr();
     e.pora();
     break;
   case 3:
     l.getrad();
     clrscr();
     l.cross_line();
     break;
   case 4:co.getrad();
      clrscr();
      co.coni();
    break;
    case 5:
	d.getrad();
	clrscr();
	d.arech();
     break;
     case 6:
       r.getrad();
       clrscr();
	r.rec();
	break;
      case 7:
	break;
   }
   if(a==7)
   break;
   }
   getch();
   return 0;
}
