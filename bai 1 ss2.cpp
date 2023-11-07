#include <stdio.h> 
int main(){
	//Khai bao cac bien canh hinh vuong, chieu dai va chieu rong cua hinh chu nhat, ban kinh duong tron
	float square_edge, length_of_rectangle, width_of_rectangle, radius_of_circle;
	//Khoi tao cac bien canh hinh vuong, chieu dai va chieu rong cua hinh chu nhat, ban kinh duong tron
	square_edge = 10;
	length_of_rectangle = 20;
	width_of_rectangle = 15;
	radius_of_circle = 8;
	//Khai bao hang so PI co gia tri la 3.14
	float PI = 3.14;
	//Tinh chu vi va dien tich cua hinh vuong, chu nhat va hinh tron
	float square_perimeter = 10*4;
	float square_area = 10*10;
	 
	float rectangle_perimeter = (20+15)*2;
	float rectangle_area = 20*15;
	
	float circle_perimeter = 8*2*PI;
	float circle_area = 8*8*PI;
	
	printf("Chu vi va dien tich cua hinh vuong la : %d \n", square_perimeter, square_area);
	printf("Chu vi va dien tich cua hinh chu nhat la : %d \n", rectangle_perimeter, rectangle_area);
	printf("Chu vi va dien tich cua hinh tron la : %d \n", circle_perimeter, circle_area);
}
