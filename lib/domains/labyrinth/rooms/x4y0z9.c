inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 0, 9 }));
  set_short( "Hallway - x4y0z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y0z9.c",
  "east" : DIR+"/rooms/x5y0z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
