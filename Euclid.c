#include <stdio.h>
/* Maked by CodeHex 10/9 */
int gcd(int a, int b);
int lcm(int a, int b);

int main(){
	int num_1, num_2;
	char box[20];
	
	puts("数字を入力してください");
	fgets(box, sizeof(box), stdin);
	sscanf(box, "%d", &num_1);
	puts("数字を入力してください");
	fgets(box, sizeof(box),stdin);
	sscanf(box, "%d", &num_2);

	printf("最大公約数は %d です。\n", gcd(num_1, num_2));
	printf("最小公倍数は %d です。\n", lcm(num_1, num_2));
}

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b){
	return a * b / gcd(a, b);
}