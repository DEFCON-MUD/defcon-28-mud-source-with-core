inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 7 }));
  set_short( "Hallway - x19y2z7" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y2z7.c",
  "north" : DIR+"/rooms/x19y3z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
