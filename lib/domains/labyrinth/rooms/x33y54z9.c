inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 9 }));
  set_short( "Corridor - x33y54z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y54z9.c",
  "east" : DIR+"/rooms/x34y54z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
