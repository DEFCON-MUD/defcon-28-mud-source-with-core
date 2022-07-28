inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 2 }));
  set_short( "Passage - x15y36z2" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y36z2.c",
  "north" : DIR+"/rooms/x15y37z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
