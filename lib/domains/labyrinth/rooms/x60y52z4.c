inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 52, 4 }));
  set_short( "Hallway - x60y52z4" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y52z4.c",
  "east" : DIR+"/rooms/x61y52z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
