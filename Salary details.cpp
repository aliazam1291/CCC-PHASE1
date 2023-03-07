#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

struct Employee{
    char name[55];
    int salary;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j;
    struct Employee a[1000],temp;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i].name>>a[i].salary;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i].salary > a[j].salary){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }else if(a[i].salary == a[j].salary && strcmp(a[i].name,a[j].name)>0){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }else
                continue;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].salary<<endl;
    }
    return 0;}
