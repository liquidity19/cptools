#include<bits/stdc++.h>
using namespace std;

int rand(int a,int b){
  return a + rand()%(b-a+1);
}

int main(int argc,char* argv[]){
  
  srand(atoi(argv[1]));
  int n = rand(1,10);
  printf("%d\n",n);

  for(int i=0;i<n;i++){
    int x = rand(97,122);
    printf("%c",x);
  }
  printf("\n");

  return 0;
}