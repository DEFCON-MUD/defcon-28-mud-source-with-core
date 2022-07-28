inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 56, 2 }));
  set_short( "Hallway - x58y56z2" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y56z2.c",
  "east" : DIR+"/rooms/x59y56z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
