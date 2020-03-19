////There are 150 houses located on a straight line. The first house is numbered 1 and the last one is numbered 150.
////Some M houses out of these 150 are occupied by cops.
////Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
////PeePee uses fast 4G Internet and sends the message to all the cops that a thief named Devu has just stolen her
////bag and ran into some house.
////Devu knows that the cops run at a maximum speed of x houses per minute in a straight line and they will search
////for a maximum of y minutes. Devu wants to know how many houses are safe for him to escape from the cops.
////Help him in getting this information.
////Input First line contains T, the number of test cases to follow. First line of each test
////case contains 3 space separated integers: M, x and y. For each test case,
////the second line contains M space separated integers which represent the house numbers where the cops are residing.
////Output For each test case, output a single line containing the number of houses which are safe to hide from cops.
////Constraints  1 ≤ T ≤ 104  1 ≤ x, y, M ≤ 10
////Example
////Input:
////3
////4 7 8
////12 52 56 98
////2 10 2
////21 75
////2 5 8
////10 51
////Output:
////0
////68
////59
////Explanation:
////Example 1: Cops in house 12 can cover houses 1 to 68, and cops in house 98 can cover the rest of the houses.
////So, there is no safe house.
////Example 2: Cops in house 21 can cover houses 1 to 41, and cops in house 75 can cover houses 55 to 95,
////leaving houses numbered 42 to 54, and 96 to 150 safe. So, in total 68 houses are safe.
//
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//    int t=0;
//    scanf("%d",&t);
//    int safe[t];
//    for(int i=0;i<t;i++)
//    {
//        int M,x,y;
//        scanf("%d",&M);
//        scanf("%d",&x);
//        scanf("%d",&y);
//        int cops[M];
//        for(int i=0;i<M;i++)
//            scanf("%d",&cops[i]);
//        int houses=0;
//        for(int i=0;i<M;i++)
//        {
//            int min=cops[i]-(x*y);
//            int max=cops[i]+(x*y);
//            if(min<1)
//                min=0;
//            houses+=max+min-1-cops[i];
//        }
//        if(houses>=100)
//            safe[i]=0;
//        else
//            safe[i]=100-houses;
//    }
//    for(int i=0;i<t;i++){
//        printf("%d\n",safe[i]);
//    }
//    return 0;
//}
