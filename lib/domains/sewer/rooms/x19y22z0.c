inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 22, 0 }));
  set_short( "Corridor - x19y22z0" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y22z0.c",
  "south" : DIR+"/rooms/x19y21z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
