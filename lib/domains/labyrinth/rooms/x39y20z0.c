inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 0 }));
  set_short( "Hallway - x39y20z0" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y20z0.c",
  "north" : DIR+"/rooms/x39y21z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
