#include <cstdio>
#include <cmath>
int cnt = 0;
double a, b, c, com, res, gap = 0.0000000000000000001;
void binary(double st, double end){
	double mid = (st + end) / 2;
	cnt++;
	if(cnt > 10000 || st > end)	return;
	com = a * mid + b * sin(mid);
	if(fabs(com-c) < 1e-9)
        res = mid;
	if(com >= c)
		binary(st, mid - gap);
	else
		binary(mid + gap, end);
}
int main(){
	scanf("%lf %lf %lf", &a, &b, &c);
	double lef = (c - b) / a, rig = (c + b) / a;
	binary(lef, rig);
	printf("%.19lf\n", res); 

}