inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 4 }));
  set_short( "Passage - x29y56z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y56z4.c",
  "north" : DIR+"/rooms/x29y57z4.c",
  "south" : DIR+"/rooms/x29y55z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
