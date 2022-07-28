inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 5 }));
  set_short( "Corridor - x19y36z5" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y36z5.c",
  "north" : DIR+"/rooms/x19y37z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
