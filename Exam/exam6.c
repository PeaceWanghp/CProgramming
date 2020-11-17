/*6. 公鸡5元/只，母鸡3元/只，小鸡3只/元，100元钱买100只鸡，求出所有的答案。*/

#include <stdio.h>

int main()
{
	int cock,hen,chicken;
	printf("两重循环方法:\n");

	for (cock = 0; cock <= 20; cock ++){
		for (hen = 0; hen <= 33; hen ++){
			chicken = 100-cock-hen;
			if (7*cock + 4*hen == 100)
				printf("公鸡=%d, 母鸡 = %d, 小鸡 = %d\n",cock,hen,chicken);
		}
	}

	return 0;
}
