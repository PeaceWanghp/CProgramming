/* 7. 输入年（year）、月（month）和日（day），计算并输出该日是该年的第几天（sumdays）

平年有28天，闰年有29天

闰年分为普通闰年和世纪闰年：
普通闰年:公历年份是4的倍数的，且不是100的倍数，为普通闰年。（如2004、2020年就是闰年）；
世纪闰年:公历年份是整百数的，必须是400的倍数才是世纪闰年（如1900年不是世纪闰年，2000年是世纪闰年）；
*/

#include <stdio.h>

int main()
{
	int i,year,month,day,sumdays;
	scanf("%d%d%d",&year,&month,&day);
	sumdays = day;

	for (i=1; i<month; i++) {
		switch(i) {
			case 2:
				if ((year%4==0 && year%100!=0) || year%400 == 0)
					sumdays += 29;
				else 
					sumdays += 28;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				sumdays += 30;
				break;
			default:
				sumdays += 31;
				break;		
		}
	}
	
	printf("year = %d, month = %d, day = %d, sumdays = %d\n",year,month,day,sumdays);

	return 0;
}
