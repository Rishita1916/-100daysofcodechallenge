#include<bits/stdc++.h>
using namespace std;
void star(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}
void hollowStar(int row,int col){
    for(int i=0;i<row;i++){
        if(i==0 || i==row-1){
            for(int j=0;j<col;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int k=0;k<col-2;k++){
                cout<<"  "; 

            }
            cout<<"* ";
            
        }
        cout<<endl;
        
}
}
void halfPyramid (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
            
    }
}
void invertedHalfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}
void numericHalfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void invertedNumericHalfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void fullPyramid(int n){
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void invertedFullPyramid(int n){
    for(int i=0;i<n;i++){
        for(int s=0;s<=i;s++){
            cout<<" ";
        }
        
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}

void hollowDiamond(int n){
    for (int i=0;i<n;i++){
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            if(j==0|| j==2*i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
    for(int i=0;i<n;i++){
        for(int s=0;s<i;s++){
            cout<<" ";

        }
        for(int j=0;j<=2*n-2*i-1;j++){
            if(j==0||j==2*n-2*i-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void halfDiamond(int n){
    int totalcols,spaces;
    
    for(int i=1;i<=2*n;i++){
        totalcols=i>n?2*n-i:i;
        spaces=n-totalcols;
        for(int s=1;s<=spaces;s++){
            cout<<" ";
        }
        for(int j=1;j<=totalcols;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

int main(){
    int row,col,n;
    cin>>n;
    cin>>row>>col;
    star(n);
    hollowStar(row,col);
    halfPyramid(n);
    invertedHalfPyramid(n);
    numericHalfPyramid(n);
    invertedNumericHalfPyramid(n);
    fullPyramid(n);
    invertedFullPyramid(n);
    halfDiamond(n);
    hollowDiamond(n);
    return 0;
}
