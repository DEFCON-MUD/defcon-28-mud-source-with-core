inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 36, 3 }));
  set_short( "Hallway - x2y36z3" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y36z3.c",
  "east" : DIR+"/rooms/x3y36z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
