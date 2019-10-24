#include<bits/stdc++.h>
using namespace std;

int rand(int a,int b){
  return a + rand()%(b-a+1);
}

int main(int argc,char* argv[]){
  
  srand(atoi(argv[1]));
  int n = rand(2,10);
  int m = rand(1,n*(n-1)/2);
  printf("%d %d\n",n,m);

  set<pair<int,int>> se;

  for(int i=1;se.size()!=m;i++){
    int a = rand(1,n);
    int b = rand(1,n);
    if(se.count({a,b})==0&&se.count({b,a})==0&&a!=b){
      se.insert({a,b});
    }
  }

  for(auto p : se){
    cout << p.first << " " << p.second << '\n';
  }

  printf("\n");

  return 0;
}