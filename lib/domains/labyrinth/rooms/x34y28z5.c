inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 28, 5 }));
  set_short( "Corridor - x34y28z5" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y28z5.c",
  "east" : DIR+"/rooms/x35y28z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
