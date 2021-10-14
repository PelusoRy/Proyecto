# define T 10
int array[T] = {1,2,3,4,5,6,7,8,9,10}; 

int suma(int tot, int arr){
    return tot+arr;
}

int total(int *arr,int Total){
    int res=0;
    for(int i=0; i<Total;i++){
        res=suma(res, arr[i]);
    }
    return res;
}

int main(){
    int fin = total(array,T);
    return 0;
}
