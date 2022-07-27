inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 5 }));
  set_short( "Hallway - x59y54z5" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y54z5.c",
  "south" : DIR+"/rooms/x59y53z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
