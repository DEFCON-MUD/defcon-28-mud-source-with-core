inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 2, 2 }));
  set_short( "Corridor - x4y2z2" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y2z2.c",
  "east" : DIR+"/rooms/x5y2z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
