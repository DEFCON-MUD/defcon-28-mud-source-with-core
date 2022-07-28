inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 42, 3 }));
  set_short( "Hallway - x14y42z3" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y42z3.c",
  "east" : DIR+"/rooms/x15y42z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
