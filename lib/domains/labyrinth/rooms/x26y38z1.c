inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 1 }));
  set_short( "Corridor - x26y38z1" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z1.c",
  "east" : DIR+"/rooms/x27y38z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
