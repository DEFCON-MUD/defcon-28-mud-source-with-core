inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 28, 1 }));
  set_short( "Hallway - x1y28z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y28z1.c",
  "north" : DIR+"/rooms/x1y29z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
