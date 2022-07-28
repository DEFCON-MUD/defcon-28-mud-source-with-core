inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 20, 1 }));
  set_short( "Corridor - x52y20z1" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y20z1.c",
  "east" : DIR+"/rooms/x53y20z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
