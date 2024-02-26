inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 12, 3 }));
  set_short( "Hallway - x47y12z3" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y12z3.c",
  "east" : DIR+"/rooms/x48y12z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
