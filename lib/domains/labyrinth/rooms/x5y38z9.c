inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 9 }));
  set_short( "Passage - x5y38z9" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y38z9.c",
  "north" : DIR+"/rooms/x5y39z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
