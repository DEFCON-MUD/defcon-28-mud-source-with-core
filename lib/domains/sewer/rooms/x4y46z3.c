inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 46, 3 }));
  set_short( "Corridor - x4y46z3" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y46z3.c",
  "east" : DIR+"/rooms/x5y46z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
