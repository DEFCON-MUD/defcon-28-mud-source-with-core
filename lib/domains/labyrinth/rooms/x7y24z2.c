inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 24, 2 }));
  set_short( "Hallway - x7y24z2" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y24z2.c",
  "north" : DIR+"/rooms/x7y25z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
