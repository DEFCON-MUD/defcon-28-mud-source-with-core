inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 7 }));
  set_short( "Corridor - x35y2z7" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y2z7.c",
  "north" : DIR+"/rooms/x35y3z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
