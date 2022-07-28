inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 2, 4 }));
  set_short( "Passage - x58y2z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y2z4.c",
  "east" : DIR+"/rooms/x59y2z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
