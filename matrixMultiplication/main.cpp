#include<iostream>
#include<vector>
using namespace std;

void matrixMult(int a[3][3],int b[3][2],int res[3][2],int rowfirst,int columnfirst,int rowsecond,int columnsecond)
{
    if(columnfirst!=rowsecond){
        cout<<"matrix multiplication not possible"<<endl;
    }else{
        for(int i=0;i<rowfirst;i++){
            for(int j=0;j<columnsecond;j++){
                    res[i][j] = 0;
            }
        }
        for(int i=0;i<rowfirst;i++){
            for(int j=0;j<columnsecond;j++){
                for(int k=0;k<rowfirst;k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    for(int i=0;i<columnfirst;i++){
        for(int j=0;j<columnsecond;j++){
            cout<<res[i][j]<<" ";
        }
    }
    return;
}

int main() {
    int res[3][2];
    int a[3][3]={{1,5,7},
               {6,2,4},
               {-5,1,6}};
    int b[3][2]={{5,3},
                 {-6,4},
                 {2,7}};

    int rowfirst=3,columnfirst=3,rowsecond=3,columnsecond=2;
    matrixMult(a,b,res,rowfirst,columnfirst,rowsecond,columnsecond);

}
