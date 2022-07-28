inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 6, 9 }));
  set_short( "Corridor - x45y6z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y6z9.c",
  "east" : DIR+"/rooms/x46y6z9.c",
  "south" : DIR+"/rooms/x45y5z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
