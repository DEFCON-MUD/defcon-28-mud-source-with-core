inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 0 }));
  set_short( "Hallway - x19y28z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y28z0.c",
  "south" : DIR+"/rooms/x19y27z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
