#include "types.h"
#include "user.h"
#include "date.h"

int main (int argc, char *argv[])
{
// If you follow the naming convention , the system call
// name will be sys_toggle and you
// call it by calling the function toggle ();
// toggle ();
    char* a = argv[1]; char *b  = argv[2];
    printf(1,"%d",add(atoi(a),atoi(b)));
    exit();
}