#include <iostream>

using namespace std;



int ispoweroftwo(int n)
{
    
	return n!=0 && ((n&(n-1))==0);

}



int main() {
    
	int t,n; 
    
	cin>>t;
    
	while(t--)
    
	{
        
		cin>>n;
        
		if(n==1)
        
		{
            
			cout<<1<<endl;
            
			continue;
        
		}
        
		else if(n==3)
        
		{
            
			cout<<1<<" "<<3<<" "<<2<<endl;
            			
			continue;
        
		}
        
		else if(n==5)
        
		{
            
			cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
            
			continue;
        
		}
        
		else if(ispoweroftwo(n))
        
		{
            
			cout<<-1<<endl;
            
			continue;
        
		}
        
		else
        
		{
            
			cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
            
			int i=6;
            
			while(i<=n)
            
			{
                
				if(ispoweroftwo(i))
                
				{
					cout<<i+1<<" "<<i<<" ";
                
					i+=2;
                
				}
                
				else
                
				{
					cout<<i<<" ";
                
					i++;
                
				}
            
			}
            
		cout<<endl;
        
		}
    
	}
	
	return 0;

}