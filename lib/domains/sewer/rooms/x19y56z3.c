inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 3 }));
  set_short( "Hallway - x19y56z3" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y56z3.c",
  "south" : DIR+"/rooms/x19y55z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
