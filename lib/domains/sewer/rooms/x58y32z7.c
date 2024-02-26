inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 32, 7 }));
  set_short( "Hallway - x58y32z7" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y32z7.c",
  "east" : DIR+"/rooms/x59y32z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
