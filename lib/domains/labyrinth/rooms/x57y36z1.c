inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 1 }));
  set_short( "Corridor - x57y36z1" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y36z1.c",
  "south" : DIR+"/rooms/x57y35z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
