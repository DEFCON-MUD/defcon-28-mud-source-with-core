inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 5 }));
  set_short( "Corridor - x47y36z5" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y36z5.c",
  "south" : DIR+"/rooms/x47y35z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
