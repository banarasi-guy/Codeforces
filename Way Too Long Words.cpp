    #include <iostream>
    using namespace std;
    #include <string.h>
     
    int main()
    {
        int t;
        cin>>t;
        while(t--){
        string a;
        cin>>a;
        
        int x;
        
        x= a.length();
        
        if(x>10)
        cout<<a[0]<<x-2<<a[x-1]<<endl;
        else
        cout<<a<<endl;
        }
     
    return 0;
    }