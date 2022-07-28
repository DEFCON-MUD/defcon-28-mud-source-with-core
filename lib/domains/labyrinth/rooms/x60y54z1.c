inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 54, 1 }));
  set_short( "Hallway - x60y54z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y54z1.c",
  "east" : DIR+"/rooms/x61y54z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
