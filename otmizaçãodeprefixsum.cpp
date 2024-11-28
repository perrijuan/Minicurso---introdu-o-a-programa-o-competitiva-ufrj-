#include<iostream>
#include<vector>

using namespace std;


void main(){
    int n;
    cin>>n;

    vector<int> query(n);
  

  //consertando o jeito de usar o push_back 
    for(int i =0;i<n;i++){
        cin>>query[i];
    }

    vector<int>prefixsum(n,0);

    prefixsum[0]=query[0];

  //formula para prefixo de soma
    for(int a=0;a<n;a++){
        prefixsum[a]=prefixsum[a-1]+query[a];
    }

  
    int a;
    int b;
    //representa o tamanho do grupo
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        //usamos -- para corrigir o indice e evitra problemas de acesso a memoria
     
       cin>>a;
       cin>>b;
       //paa corrigir o indice e usar a indexacao correta
       a--;
       b--;

       //caso base para a soma de prefixo e caso n+1 
       if(a==0){
           cout<<prefixsum[b]<<endl;
       }
       else{
       cout<<prefixsum[b]-prefixsum[a-1]<<endl;
    }
   

}

}
