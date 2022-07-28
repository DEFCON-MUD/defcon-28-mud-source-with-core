inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 15, 1 }));
  set_short( "Passage - x27y15z1" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y16z1.c",
  "south" : DIR+"/rooms/x27y14z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
