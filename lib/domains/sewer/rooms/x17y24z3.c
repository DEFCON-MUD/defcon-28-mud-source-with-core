inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 24, 3 }));
  set_short( "Hallway - x17y24z3" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y24z3.c",
  "north" : DIR+"/rooms/x17y25z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
