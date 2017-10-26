    #include <iostream>
    using namespace std;
     
    int main() {
    	int a ,b;
    	cout<<"enter a and b";
    	cin>>a>>b;
    	int *p;
    	p =&a;
    	b =a;
    	cout<<"a= "<<a<<"\nb ="<<b<<"\n*p="<<*p;
    	// your code goes here
    	return 0;
    }
