#include <stdio.h>
#include <math.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		scanf("%d%d", &a, &b);
		int c = b - a;
		double t = sqrt(c);
		int max = (int)t;
		int max_length = max * max; // 1..max..1 의 합.
		int left = c - max_length; // 남은 거리
		int time = 2 * max - 1; // max_length 까지의 이동횟수
		double j = (double)left / max; // 남은 거리는 최대속도 이하의 속도로 이동하므로 이 값만큼의 추가이동이 필요. 소수점이라면 +1 
		/*printf("최대 속도 %d\n", max);
		printf("최대속도이동거리 %d\n", max_length);
		printf("최대속도이동거리 이동횟수 %d\n", time);
		printf("전체거리 - 최대속도이동거리 = 남은거리 %d\n", left);
		printf("남은거리를 이동하는데 필요한 최소 이동횟수 %lf\n", j);*/
		printf("%d\n", (int)ceil(time + j));
		
	}
}
