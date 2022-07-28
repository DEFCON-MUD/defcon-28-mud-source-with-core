inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 29, 3 }));
  set_short( "Hallway - x35y29z3" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y30z3.c",
  "south" : DIR+"/rooms/x35y28z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
