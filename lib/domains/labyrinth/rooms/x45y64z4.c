inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 64, 4 }));
  set_short( "Corridor - x45y64z4" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y64z4.c",
  "east" : DIR+"/rooms/x46y64z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
