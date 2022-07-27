inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 19, 2 }));
  set_short( "Passage - x3y19z2" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y20z2.c",
  "south" : DIR+"/rooms/x3y18z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
