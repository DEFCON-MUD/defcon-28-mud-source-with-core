inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 42, 3 }));
  set_short( "Corridor - x37y42z3" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y42z3.c",
  "east" : DIR+"/rooms/x38y42z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
