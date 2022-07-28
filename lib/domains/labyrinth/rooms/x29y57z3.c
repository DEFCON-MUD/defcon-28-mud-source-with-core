inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 57, 3 }));
  set_short( "Corridor - x29y57z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y58z3.c",
  "south" : DIR+"/rooms/x29y56z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
