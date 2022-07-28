inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 0 }));
  set_short( "Hallway - x55y56z0" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y56z0.c",
  "south" : DIR+"/rooms/x55y55z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
