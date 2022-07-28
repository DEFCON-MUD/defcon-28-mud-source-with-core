inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 54, 8 }));
  set_short( "Hallway - x27y54z8" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y54z8.c",
  "north" : DIR+"/rooms/x27y55z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
