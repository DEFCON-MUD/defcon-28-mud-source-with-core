inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 16, 7 }));
  set_short( "Hallway - x6y16z7" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y16z7.c",
  "east" : DIR+"/rooms/x7y16z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
