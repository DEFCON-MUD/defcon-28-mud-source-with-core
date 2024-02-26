inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 5 }));
  set_short( "Corridor - x17y34z5" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y34z5.c",
  "south" : DIR+"/rooms/x17y33z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
