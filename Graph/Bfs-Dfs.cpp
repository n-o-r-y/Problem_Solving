    #include<stdio.h>
    #include<string.h>
    int Vis[10];
    int Q[10],Q_back=-1;
    int AM[6][6]={
        {0, 1, 0, 1, 0, 0},
        {1, 0, 1, 0, 1, 0},
        {0, 1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1, 0},
        {0, 1, 1, 1, 0, 0},
        {0, 0, 1, 0, 0, 0}
    };
     
    int Q_empty(){return Q_back==-1?1:0;}
    int Q_peek(){return Q[0];}
    void Q_pop(){int i;for(i=0;i<Q_back;i++){Q[i]=Q[i+1];}Q_back--;}
    void Q_push(int v){Q[++Q_back]=v;}
     
    void bfs(int s){//starting node
        int i;
        Q_back=-1;
        Q_push(s);
        Vis[s]=1;
        while(Q_empty()==0){
            int u=Q_peek();
            for(i=0;i<6;i++){//node er count
                if(AM[u][i]==1&&Vis[i]==0){
                    Vis[i]=1;
                    Q_push(i);

                }
            }
            printf(" %d",u);
            arr[j]=u;//store kortesi
            j++;
            Q_pop();
        }
    }
     
    void dfs(int s){
        printf(" %d",s+1);
        Vis[s]=1;
        int i;
        for(i=0;i<6;i++){
            if(s!=i&&AM[s][i]==1&&Vis[i]==0){
                dfs(i);
            }
        }
    }
     
    int main(){
        memset(Vis,0,sizeof(Vis));
        printf("BFS:");
        bfs(0);
        printf("\n");
        memset(Vis,0,sizeof(Vis));
        printf("DFS:");
        dfs(0);
        printf("\n");
        return 0;
    }
     
