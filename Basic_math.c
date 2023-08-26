#include <math.h>
#include <stdio.h>

#define FL_FMT   "%.2lf"
#define TIME_FMT "%02d:%02d:%02d"
# define PI 3.1415926

int
main(int argc, char *argv[]) {
    /* the declarations you need to define */
    double r, area_square, perimeter_square, 
       area_circle, perimeter_circle, elapsed_hours;
    int start_hour, start_min, start_sec,
        finish_hour, finish_min, finish_sec;

    /* read in length/radius r, start time and finish time
     * assuming that they are nice numbers (no error checking) */
    printf("Enter a length/radius r: ");
    scanf("%lf", &r);

    printf("Enter event start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &start_hour, &start_min, &start_sec);

    printf("Enter event finish time (hh:mm:ss): ");
    scanf("%d:%d:%d", &finish_hour, &finish_min, &finish_sec);

    /* *************************************************************** */
    /* Hey! Listen! Change these assignment statements! */

    /* 1. The area of a square of edge length r */
    area_square = r * r;

    /* 2. The perimeter of a square of edge length `r` */
    perimeter_square = r * 4.0;

    /* 3. The area of a circle of radius `r` */
    area_circle = PI * r * r;

    /* 4. The perimeter of a circle of radius `r` */
    perimeter_circle = 2.0 * PI * r;

    /* 5. Time in elapsed hours between the start time
     * (`start_hour`:`start_min`:`start_sec`) and finishing time
     * (`finish_hour`:`finish_min`:`finish_sec`) of some event, assuming those
     * two times are within the same day. */
    elapsed_hours = (finish_hour + (finish_min / 60.0) + (finish_sec / (60.0 * 60.0)))
    - (start_hour + (start_min / 60.0) + (start_sec / (60.0 * 60.0)));

    /* *************************************************************** */
    /* and now we print out the results to be checked */
    printf("1. The area of a square of edge length " FL_FMT "        = " FL_FMT
           "\n", r, area_square);
    printf("2. The perimeter of a square of edge length " FL_FMT "   = " FL_FMT
           "\n", r, perimeter_square);
    printf("3. The area of a circle of radius " FL_FMT "             = " FL_FMT
           "\n", r, area_circle);
    printf("4. The perimeter of a circle of radius " FL_FMT "        = " FL_FMT
           "\n", r, perimeter_circle);
    printf("5. The time in elapsed hours between start time\n     " TIME_FMT
           " and finish time " TIME_FMT " of an event  = " FL_FMT "\n",
           start_hour, start_min, start_sec, finish_hour, finish_min,
           finish_sec, elapsed_hours);
}