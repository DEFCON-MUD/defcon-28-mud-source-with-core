inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 2, 1 }));
  set_short( "Passage - x57y2z1" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y2z1.c",
  "east" : DIR+"/rooms/x58y2z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
