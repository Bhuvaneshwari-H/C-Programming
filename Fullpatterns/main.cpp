#include<iostream>
void pattern1(int,int);
void pattern2(int);
void pattern3(int);
void pattern4(int);
void pattern5(int);
void pattern6(int);
void pattern7(int);
void pattern8(int);
void pattern9(int);
void pattern10(int);
void pattern11(int);
void pattern12(int);
void pattern13(int);
void pattern14(int);
void pattern15(int);
void pattern17(int);
void pattern18(int);
void pattern19(int);
void pattern20(int,int);
void pattern21(int);
void pattern22(int);
void pattern23(int);
void pattern25(int,int);
void pattern26(int);
void pattern28(int);
void pattern29(int);
void pattern30(int);
void pattern32(int);
void pattern33(int);
void pattern34(int);
void pattern35(int,int);
void pattern36(int);
void pattern37(int);
using namespace std;
int main(){
    int n,m,rows,columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    cout<<"Enter the number: ";
    cin>>n;
    pattern1(rows,columns);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(rows,columns);
    pattern21(n);
    pattern22(n);
    pattern23(n);
    pattern25(rows,columns);
    pattern26(n);
    pattern28(n);
    pattern29(n);
    pattern30(n);
    pattern32(n);
    pattern33(n);
    pattern34(n);
    pattern35(rows,columns);
    pattern36(n);
    pattern37(n);

    return 0;
}

void pattern1(int rows,int columns){
    int i,j;
    cout<<"PATTERN 1"<<endl;
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern2(int number){
    int i,j;
    cout<<"PATTERN 2"<<endl;
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern3(int number){
    int i,j;
    cout<<"PATTERN 3"<<endl;
    for(i=number;i>0;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern4(int number){
    int i,j;
    cout<<"PATTERN 4"<<endl;
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern5(int number){
    cout<<"PATTERN 5"<<endl;
    int i=1,j,u=number;
    for(i=1;i<=2*number;i++){
        if(i<=number){
            for(j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(j=u-1;j>0;j--){
                cout<<"*";
            }
        u--;
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<endl;
}

void pattern6(int number){
    int i,j,k;
    cout<<"PATTERN 6"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern7(int number){
    int i,j,k;
    cout<<"PATTERN 7"<<endl;
    for(i=number;i>=1;i--){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern8(int number){
    int i,j,k,u=0;
    cout<<"PATTERN 8"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=0;j<i+u;j++){
            cout<<"*";
        }
        u++;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern9(int number){
    int i,j,k,u=number;
    cout<<"PATTERN 9"<<endl;
    for(i=number;i>=0;i--){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=0;j<=i+u;j++){
            cout<<"*";
        }
        u--;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern10(int number){
    int i,j,k;
    cout<<"PATTERN 10"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern11(int number){
    int i,j,k;
    cout<<"PATTERN 11"<<endl;
    for(i=number;i>=1;i--){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern12(int number){
    int i,j,k;
    cout<<"PATTERN 12"<<endl;
     for(i=number;i>=1;i--){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern13(int number){
    int i,j,k,u,l=0;
    cout<<"PATTERN 13"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        if(i==number){
            for(u=1;u<=2*number-1;u++)
                cout<<"*";
        }
        else{
            for(j=1;j<=i+l;j++){
                if(j==1 || j==i+l)
                    cout<<"*";
                else
                    cout<<" ";
            }
            l++;
        }

        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}


void pattern14(int number){
    int i,j,k,u,l=0;
    u=2*number-3;
    cout<<"PATTERN 14"<<endl;
    for(i=number;i>=0;i--){
        for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        if(i==number){
            for(j=1;j<=2*number-1;j++)
                cout<<"*";
                cout<<endl;
        }
        else{

            for(j=1;j<=u;j++){
                if(j==1 || j==u){
                    cout<<"*";
                }
                else
                    cout<<" ";

            }
            u=u-2;
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<endl;
}

void pattern15(int number){
    int i,j,k,u,l=0;
    u=2*number-3;
    cout<<"PATTERN 15"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }

            for(j=1;j<=i+l;j++){
                if(j==1 || j==i+l)
                    cout<<"*";
                else
                    cout<<" ";
            }
            l++;
        cout<<endl;
    }
    for(i=number-1;i>=0;i--){
        for(k=1;k<=number-i;k++){
                cout<<" ";
            }

            for(j=1;j<=u;j++){
                if(j==1 || j==u){
                    cout<<"*";
                }
                else
                    cout<<" ";

            }
            u=u-2;
            cout<<endl;
        }

    cout<<endl;
    cout<<endl;
}

void pattern17(int number){
    int i,j,k;
    cout<<"PATTERN 17"<<endl;
    for(i=1;i<=number;i++){
        for(k=1;k<=number-i;k++){
            cout<<" ";
        }
        for(j=i;j>0;j--){
            cout<<j;
        }
        for(j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    for(i=number-1;i>0;i--){
        for(k=1;k<number-i+1;k++){
            cout<<" ";
        }
        for(j=i;j>0;j--){
            cout<<j;
        }
        for(j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

}


void pattern19(int number){
    int i,j;
    char alpha='a';
    cout<<"PATTERN 19"<<endl;
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}


void pattern20(int rows,int columns){
    int i,j,k;
    cout<<"PATTERN 20"<<endl;
    for(i=1;i<=rows;i++){
        if(i==1 || i==rows){
            for(j=1;j<=columns;j++){
                cout<<"*";
        }
        }
        else{
            for(j=1;j<=columns;j++){
                if(j==1 || j==columns)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }

        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern21(int number){
    int i,j,u=1;
    cout<<"PATTERN 21"<<endl;
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
                cout<<" ";
            cout<<u;
            u++;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern22(int number){
    int i,j,k;
    cout<<"PATTERN 22"<<endl;
    for(i=1;i<=number;i++){
        if(i%2!=0){
            for(j=1;j<=i;j++){
                if(j%2!=0){
                   cout<<" ";
                   cout<<"1";
                }
                else{
                    cout<<" ";
                   cout<<"0";
                }

            }
            cout<<endl;
        }
        else{
            for(j=0;j<i;j++){
                if(j%2==0){
                    cout<<" ";
                   cout<<"0";
                }
                else{
                    cout<<" ";
                   cout<<"1";
                }

            }
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<endl;
}

void pattern23(int number){
    int i,j,k;
    cout<<"PATTERN 23"<<endl;
    for(i=1;i<=3;i++){
        for(j=1;j<=number;j++){
            if((i+j)%4==0 || (i==2 && j%4==0))
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}


void pattern25(int rows,int columns){
    int i,j,k;
    cout<<"PATTERN 25"<<endl;
    for(i=1;i<=rows;i++){
            for(k=1;k<=rows-i;k++){
                cout<<" ";
            }
        if(i==1 || i==rows){
            for(j=1;j<=columns;j++){
                cout<<"*";
        }
        }
        else{
            for(j=1;j<=columns;j++){
                if(j==1 || j==columns)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }

        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern26(int number){
    int i,j,k;
    cout<<"PATTERN 26"<<endl;
    for(i=number;i>=0;i--){
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<number-i+1;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern28(int number){
    int i,j,k;
    cout<<"PATTERN 28"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=number-1;i>=1;i--){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
}

void pattern29(int number){
    int i,j,k,l,u;
    cout<<"PATTERN 29"<<endl;

}

void pattern30(int number){
    int i,j;
    char alpha='a';
    cout<<"PATTERN 30"<<endl;
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            cout<<alpha;

        }
        alpha++;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}


void pattern32(int number){
    int i,j;
    cout<<"PATTERN 32"<<endl;
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern33(int number){
    int i,j,k;
    cout<<"PATTERN 33"<<endl;
    for(i=number;i>=0;i--){
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}


void pattern34(int number){
    int i,j,k;
    cout<<"PATTERN 34"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=1;j<=i;j++){
            cout<<" ";
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern35(int rows,int columns){
    int i,j,k;
    cout<<"PATTERN 35"<<endl;
    for(i=1;i<=rows;i++){
            for(k=1;k<=rows-i;k++){
                cout<<" ";
            }
        for(j=1;j<=columns;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern36(int number){
    int i,j,k,u=0;
    cout<<"PATTERN 36"<<endl;
    for(i=1;i<=number;i++){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=0;j<i+u;j++){
            cout<<"*";
        }
        u++;
        cout<<endl;
    }
    u=number-1;
    for(i=number;i>=0;i--){
            for(k=1;k<=number-i;k++){
                cout<<" ";
            }
        for(j=0;j<i+u;j++){
            cout<<"*";
        }
        u--;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}


void pattern37(int number){
    int i,j;
    char alpha='a';
    cout<<"PATTERN 37"<<endl;
    for(i=1;i<=number;i++){
            alpha='a';
        for(j=1;j<=i;j++){
            cout<<alpha;
            alpha++;
        }

        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void pattern18(int number){
    int i,j,k,l;
    k=number;

}

