inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 50, 4 }));
  set_short( "Hallway - x57y50z4" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y50z4.c",
  "north" : DIR+"/rooms/x57y51z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
