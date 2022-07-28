inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 3 }));
  set_short( "Hallway - x59y54z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y54z3.c",
  "east" : DIR+"/rooms/x60y54z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
