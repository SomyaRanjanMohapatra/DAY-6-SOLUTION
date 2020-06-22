   #include<iostream.h>
   #include<conio.h>
   void main()
   {
     int n,j,ctr,r;
     cout<<"Find The Frequency of each digit in a given integer\n";
     cout<<"INPUT ANY NUMBER";
     cin>>n;
     for(int i=0;i<10;i++)
     {
       cout<<"the frequency of "<<i<<"=";
       ctr=0;
       for(j=n;j>0;j=j/10)
       {
	 r=j%10;
	 if(r==i)
	 ctr++;
       }
       cout<<ctr<<endl;
     }
   }