#include <stdio.h>
//int main(){
  //  int array[2][3]={{1,2,3},{4,5,6}};//[2][3]can mean there are 2 colunms and 3 rows but when indexing them you sue the indexes to map them
    //printf("%d\n",array[0][1]);
    //printf("%d\n",array[1][0]);// this is the indexing
    //return 0;

//}



int main(){
    int array[2][3]={{1,2,3},{4,5,6}};
    for( int i=0;i<2;++i){
        for (int j=0;j<3;++j){
            printf("%d\n",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}