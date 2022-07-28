inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 3 }));
  set_short( "Hallway - x55y56z3" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y56z3.c",
  "south" : DIR+"/rooms/x55y55z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
