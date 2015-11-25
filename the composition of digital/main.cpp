//
//  main.cpp
//  the composition of digital
//
//  Created by 李伯阳 on 15/11/25.
//  Copyright © 2015年 李伯阳. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i,j,k,p,o;
    printf("\n");
    for (i=1;i<5;i++)
        for(j=1;j<5;j++)
            for(k=1;k<5;k++)
                for(p=1;p<5;p++)
                    for(o=1;o<5;o++)
                       {
                             if(i!=k&&i!=j&&j!=k)
                              printf("%d,%d,%d,%d,%d\n",i,j,k,p,o);
                       }
    return 0;
}
