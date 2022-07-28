inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 59, 1 }));
  set_short( "Passage - x55y59z1" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y60z1.c",
  "south" : DIR+"/rooms/x55y58z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
