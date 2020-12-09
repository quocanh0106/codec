#include<stdio.h>
#include<string.h>
//khai báo hàm tìm max của 2 mảng
int maxOfArray(int n, int a[]){
    //khai báo một biến max đầu tiên cho bằng không
    int max = 0;
    //dùng vòng lặp for để duyệt từng phần tử
    for(int i = 0; i < n; i++){
        //nếu phần tử nào lớn hơn max thì max sẽ bằng phần tử đó rồi lại duyệt tiếp cho đến khi duyệt hết các phần tử trên mảng
        if(a[i] > max){
            max = a[i];
        }
    }
    //hàm trả về giá trị là max của mảng vừa nhập
    return max;
}
//khai báo hàm nhập mảng
void addarr(int n, int a[]){
    //nhập n từ bàn phím
    scanf("%d %d",&n);
    //nhập từng phần tử của mảng từ bàn phím dùng vòng lặp for để duyệt từng phần tử của mảng
    for(int i = 0; i < n;i++){
        scanf("%d",a[i]);
    }
}
//khai báo hàm main
int main(){
    //gọi hàm nhập mảng để nhập 2 mảng
    int n1, n2;
    int arr1[n1],arr2[n2];
    addarr(n1,arr1);
    addarr(n2,arr2);
    //gọi hàm tìm phần tử max nhất của mảng rồi in ra
    printf("%d %d",maxOfArray(n1, arr1),maxOfArray(n2, arr2));
    return 0;
}