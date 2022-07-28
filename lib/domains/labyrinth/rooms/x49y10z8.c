inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 8 }));
  set_short( "Hallway - x49y10z8" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y11z8.c",
  "south" : DIR+"/rooms/x49y9z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
