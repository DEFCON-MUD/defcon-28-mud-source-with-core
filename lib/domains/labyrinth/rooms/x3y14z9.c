inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 14, 9 }));
  set_short( "Hallway - x3y14z9" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y14z9.c",
  "south" : DIR+"/rooms/x3y13z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
