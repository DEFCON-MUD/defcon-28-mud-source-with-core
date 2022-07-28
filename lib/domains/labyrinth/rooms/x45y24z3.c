inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 24, 3 }));
  set_short( "Hallway - x45y24z3" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y24z3.c",
  "north" : DIR+"/rooms/x45y25z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
