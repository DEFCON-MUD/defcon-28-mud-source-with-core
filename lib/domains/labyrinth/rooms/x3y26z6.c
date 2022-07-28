inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 6 }));
  set_short( "Hallway - x3y26z6" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y26z6.c",
  "east" : DIR+"/rooms/x4y26z6.c",
  "north" : DIR+"/rooms/x3y27z6.c",
  "south" : DIR+"/rooms/x3y25z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
