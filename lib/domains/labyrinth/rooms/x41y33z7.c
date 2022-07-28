inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 33, 7 }));
  set_short( "Hallway - x41y33z7" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y34z7.c",
  "south" : DIR+"/rooms/x41y32z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
