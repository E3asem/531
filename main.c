#include <stdio.h>
#include <stdlib.h>
#include "std_types.h"
typedef struct employee
{
u8 id;
u32 salary;
f32 bonus;
}eman;


eman scanStruct(void)
{
    eman e;

    int x=100;
    scanf("%d",&e.id);
 scanf("%d",&e.salary);
  scanf("%f",&e.bonus);


  return e;

}


void printStruct(eman e)
{
    printf("id=%d \n",e.id);
    printf("total=%f \n",e.bonus+e.salary);
}

int main()
{

eman e1={10,200,301};

struct employee e2={20,300,401};


eman y=scanStruct();

printStruct(y);

    return 0;
}
