/*The int variables could be used here; the code will work successfully.
(Using pre defined values for distance and time for better understanding) */

#include <stdio.h>
int main()
{
		int distance=200,time=50,speed;

		speed=distance/time;

		printf("Average speed is %d meters per second.",speed);
Que3b();
return 0;

}

/*However, decimals will not be displayed.
Using integers would be a problem because, let’s say (in real life,mostly) the distance is recorded in kms and time in hours. Then, to enter these values to the code, you must convert kms to meters and hours to second. When doing that, you might get decimal points. Also, the answers would most probably be in decimals; using float or double would be an advantage.
Hence, using float would be a good option but double is the best data type in this case, due to the increased precisions.
Note- This code let’s the user input values for distance and time.*/


void Que3b()
{
    double distance,time,speed;

    printf("\n\n");
    printf("-------------");
    printf("\n\n");
    printf("Enter the total distance in meters: ");
    scanf("%lf",&distance);

    printf("Enter time taken in seconds: ");
    scanf("%lf",&time);

    speed=distance/time;

    printf("Average speed is %f meters per second.",speed);

	return 0;
}
