inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 4 }));
  set_short( "Passage - x57y58z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y59z4.c",
  "south" : DIR+"/rooms/x57y57z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
