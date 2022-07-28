inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 7 }));
  set_short( "Hallway - x37y38z7" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y38z7.c",
  "east" : DIR+"/rooms/x38y38z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
