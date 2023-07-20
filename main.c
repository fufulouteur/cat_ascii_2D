#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

void put_cat1();
void put_cat2();
int main()
{
    while (true){
        system("clear");
        put_cat1();
        usleep(1000000);
        system("clear");
        put_cat2() ;
        usleep(1000000);
    }
    return(0);
}

//,_     _
//|\\_,-~/
/// _  _ |        ,--.
//(  @  _ )      -  ,-'
//\  _T_/-._( (
///         `. \
//|         _  \ |
//\ \ ,  /      |
//|| |-_\__   /
//((_/`(____,-'
