inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 21, 3 }));
  set_short( "Corridor - x19y21z3" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y22z3.c",
  "south" : DIR+"/rooms/x19y20z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
