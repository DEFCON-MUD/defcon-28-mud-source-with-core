inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 19, 7 }));
  set_short( "Hallway - x13y19z7" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y20z7.c",
  "south" : DIR+"/rooms/x13y18z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
