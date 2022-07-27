inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 3 }));
  set_short( "Corridor - x33y50z3" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y50z3.c",
  "south" : DIR+"/rooms/x33y49z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
