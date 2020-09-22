#include <iostream>
#include <cmath>


using namespace std;
 class ToanHoc{
 	public :
 		bool isNguyenTo(int x){
 			int dem=0;
 			for(int i=1;i<=x;i++){
 				if(x%i==0){
 					dem++;
				 }
			 }
			 if(dem==2){
			 	return 1;
			 }else{
			 	return 0;
			 }
		 }
 		bool isHoanHao(int x){
 			int dem=0;
 			for(int i=1;i<x;i++){
 				if(x%i==0){
 					dem+=i;
				 }
			 }
			 if(dem==x){
			 	return 1;
			 }else{
			 	return 0;
			 }
		 }
		 
		 bool isChinhPhuong(int x){
		 	int i;
		 	 i=sqrt(x);
		    if(x==i*i)
		        return 1;
		    else 
		        return 0;
			
		 }
 			
 };
 int main(){
 	ToanHoc th=ToanHoc();
 	int n;
 	cout<<"Nhap n=";
 	cin>>n;


 	if(th.isNguyenTo(n)==1){
 		cout<<n<<" La so nguyen to\n";
	 }else{
	 	cout<<n<<" Khong la so nguyen to\n";
	 }
 	if(th.isHoanHao(n)==1){
 		cout<<n<<" La so hoan hao\n";
	 }else{
	 	cout<<n<<" Khong la so hoan hao\n";
	 }
	 
	 if(th.isChinhPhuong(n)==1){
 		cout<<n<<" La so chinh phuong\n";
	 }else{
	 	cout<<n<<" Khong la so chinh phuong\n";
	 }
 }
