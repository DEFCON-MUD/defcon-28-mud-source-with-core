inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 31, 3 }));
  set_short( "Corridor - x33y31z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y32z3.c",
  "south" : DIR+"/rooms/x33y30z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
