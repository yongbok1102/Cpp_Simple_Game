#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
/*----------------------------------*/
/* dice_highlow.cpp                 */
/* Source code for simple dice game */
/* Have a good time                 */
/*----------------------------------*/

int sum(int x, int y)
{
    return x+y;
}

int main()
{
    srand((unsigned int)time(NULL));
    //Highlow(0: high, 1:low)
    int hl;
    //Dice point
	int d11; 
	int d12; 
	int d21; 
	int d22;
    //Score you get or lose
    int get;
    //Score
	int scr1 = 100; int scr2 = 100;
    //Decides who casts dice first(0: you, 1:opponent)
    int dec;
    //Play button
    char p;
    dec = rand()%2+0;
    //Round number;
    int rnd = 1;
    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;
    while(scr1>0 || scr2>0)
    {
        for(int i=1;i<=20;i++){cout<<'-';}
        cout<<"round "<<rnd<<endl;        
        if(dec==0)
        {
			cout << "High or low(0: high, 1:low)";
            cin>>hl;
            if(hl==0)
                cout<<"You choose high\n";
            else
                cout<<"You choose low\n";
            
            cout<<"Press any keys\n";
            cin>>p;
            d11 = rand()%6+1; d12 = rand()%6+1;
            cout<<"You: "<<d11<<'\t'<<d12<<endl;
            d21 = rand()%6+1; d22 = rand()%6+1;
            cout<<"Oppon: "<<d21<<'\t'<<d22<<endl;
            
            //Calculating the gain/loss
            if(d11==d12 && d21==d22)
                get = 4*fabs(sum(d11,d12)-sum(d21,d22));
            else if(d11==d12 && d21!=d22)
                get = 2*fabs(sum(d11,d12)-sum(d21,d22));
            else if(d11!=d12 && d21==d22)
                get = 2*fabs(sum(d11,d12)-sum(d21,d22));
            else
                get = fabs(sum(d11,d12)-sum(d21,d22));
            
            if(hl==0)
            {
                if(sum(d11,d12)>sum(d21,d22))
                {
                    scr1=scr1+get; scr2=scr2-get;
                    cout<<"You win!\n";
                    cout<<"You gain "<<get<<" points\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                    dec=0;
                }
                else if(sum(d11,d12)<sum(d21,d22))
                {
                    scr1=scr1-get; scr2=scr2+get;
                    cout<<"You lose!\n";
                    cout<<"You lose "<<get<<" points\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                    dec=1;
                }
                else
                {
                    cout<<"Draw\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                }
            }
            else
            {
                if(sum(d11,d12)<sum(d21,d22))
                {
                    scr1=scr1+get; scr2=scr2-get;
                    cout<<"You win!\n";
                    cout<<"You gain "<<get<<" points\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                    dec=0;
                }
                else if(sum(d11,d12)>sum(d21,d22))
                {
                    scr1=scr1-get; scr2=scr2+get;
                    cout<<"You lose!\n";
                    cout<<"You lose "<<get<<" points\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                    dec=1;
                }
                else
                {
                    cout<<"Draw\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;
                }                
            }
        }
        else
        {
            hl = rand()%2+0;
            if(hl==0)
                cout<<"The opponent choose high\n";
            else
                cout<<"The opponent choose low\n";
            d21 = rand()%6+1; d22 = rand()%6+1;
            cout<<"Oppon: "<<d21<<'\t'<<d22<<endl;
            cout<<"Press any keys\n";
            cin>>p;
            d11 = rand()%6+1; d12 = rand()%6+1;
			cout << "You: " << d11 << '\t' << d12 << endl;

			//Calculating the gain/loss
			if (d11 == d12 && d21 == d22)
				get = 4 * fabs(sum(d11, d12) - sum(d21, d22));
			else if (d11 == d12 && d21 != d22)
				get = 2 * fabs(sum(d11, d12) - sum(d21, d22));
			else if (d11 != d12 && d21 == d22)
				get = 2 * fabs(sum(d11, d12) - sum(d21, d22));
			else
				get = fabs(sum(d11, d12) - sum(d21, d22));

            if(hl==0)
            {
                if(sum(d11,d12)>sum(d21,d22))
                {
                    scr1=scr1+get; scr2=scr2-get;
                    cout<<"You win!\n";
                    cout<<"You gain "<<get<<" points\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;
                    dec=0;
                }
                else if(sum(d11,d12)<sum(d21,d22))
                {
                    scr1=scr1-get; scr2=scr2+get;
                    cout<<"You lose!\n";
                    cout<<"You lose "<<get<<" points\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                    dec=1;
                }
                else
                {
                    cout<<"Draw\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;
                }
            }
            else
            {
                if(sum(d11,d12)<sum(d21,d22))
                {
                    scr1=scr1+get; scr2=scr2-get;
                    cout<<"You win!\n";
                    cout<<"You gain "<<get<<" points\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                    dec=0;
                }
                else if(sum(d11,d12)>sum(d21,d22))
                {
                    scr1=scr1-get; scr2=scr2+get;
                    cout<<"You lose!\n";
                    cout<<"You lose "<<get<<" points\n"; 
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;                    
                    dec=1;
                }
                else
                {
                    cout<<"Draw\n";
                    cout<<"You: "<<scr1<<", Oppon: "<<scr2<<endl;
                }                
            }
            
        }
        rnd++;
        for(int i=1;i<=20;i++){cout<<'-';}
        for(int i=1;i<=6;i++){cout<<'\n';}
    }
    cout<<"Game over\n";
    return 0;
}
