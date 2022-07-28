inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 64, 4 }));
  set_short( "Hallway - x58y64z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y64z4.c",
  "east" : DIR+"/rooms/x59y64z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
