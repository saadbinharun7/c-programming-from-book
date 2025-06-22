//কোন বস্তু u আদিবেগ এবং a ত্বরণে যাত্রা শুরু করল। t সময় পর এর বেগ যদি v হয় তবে 2t সময়ে বস্তটির অতিক্রান্ত দূরত্ব কত?

#include <stdio.h>

int main(){
    /* we know s = ut + ½ at²
    in 2t time, s = u(2t) + ½ a(2t)²
                  = u * 2t + ½ a * 4t²
                  = u * 2t + a * 2t²
                  = 2t( u + at )                [we know: v = u + at]
                  = 2tv */

    int t, v, s, u, a;

    printf("initial velocity = ");
    scanf("%d", &u);

    printf("acceleration  = ");
    scanf("%d", &a);

    printf("time = ");
    scanf("%d", &t);

    v = u + a * t;
    s = 2 * t * v;


    printf("distance  = %d meter", s);



    return 0;
}
