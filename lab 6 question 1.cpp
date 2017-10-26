    #include <iostream>
    using namespace std;
     
    int main() {
    	int i;
    	double d;
    	float f;
    	char c;
    	cout<<"enter the integer";
    	cin>>i;
    	int *ip;
    	ip = & i;
    cout<<"enter a double value";
    cin>>d;
    double *dp;
    dp = &d;
    cout<<"enter a float value";
    cin>>f;
    float *fp;
    fp =&f;
    cout<<"enter a char value";
    cin>>c;
    char *cp;
    cp =&c;
    cout<<"size of integer variable ="<< sizeof (i)<<"size of pointer variable ="<< sizeof(ip);
    cout<<"size of double variable ="<<sizeof (d)<<"size of pointer variable="<<sizeof (dp);
    cout<<"size of float variable= "<<sizeof (f)<<"size of pointer ="<<sizeof (fp);
    cout<<"size of char ="<<sizeof (c)<<"size of pointer="<<sizeof (cp);
    	// your code goes here
    	return 0;
    }
