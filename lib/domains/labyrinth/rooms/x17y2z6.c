inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 6 }));
  set_short( "Corridor - x17y2z6" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y2z6.c",
  "east" : DIR+"/rooms/x18y2z6.c",
  "south" : DIR+"/rooms/x17y1z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
