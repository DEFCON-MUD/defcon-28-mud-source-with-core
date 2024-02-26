inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 5 }));
  set_short( "Passage - x25y12z5" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y12z5.c",
  "north" : DIR+"/rooms/x25y13z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
