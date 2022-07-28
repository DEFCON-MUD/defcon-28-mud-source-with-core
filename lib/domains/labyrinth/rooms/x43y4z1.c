inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 1 }));
  set_short( "Passage - x43y4z1" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y4z1.c",
  "east" : DIR+"/rooms/x44y4z1.c",
  "north" : DIR+"/rooms/x43y5z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
