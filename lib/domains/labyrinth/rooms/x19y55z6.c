inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 55, 6 }));
  set_short( "Hallway - x19y55z6" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y56z6.c",
  "south" : DIR+"/rooms/x19y54z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
