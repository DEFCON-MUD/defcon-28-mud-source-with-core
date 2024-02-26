inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 9 }));
  set_short( "Hallway - x57y46z9" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y46z9.c",
  "east" : DIR+"/rooms/x58y46z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
