inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 3 }));
  set_short( "Passage - x17y14z3" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y14z3.c",
  "south" : DIR+"/rooms/x17y13z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
