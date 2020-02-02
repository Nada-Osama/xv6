#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{

  /*int *ptr=NULL;
  try {
    if(ptr) {
       //Your pointer is null, raise an exception.
       throw PointerException::NullReference;
    }
  } catch(PointerException exception) {
   *ptr=0;
  }*/


  int *p = 0;
  printf(1, "hello [%x]\n", *p);  //ohh! dereferencing null pointe 

  exit();
}
