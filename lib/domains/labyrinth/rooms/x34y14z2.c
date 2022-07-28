inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 14, 2 }));
  set_short( "Corridor - x34y14z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y14z2.c",
  "east" : DIR+"/rooms/x35y14z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
