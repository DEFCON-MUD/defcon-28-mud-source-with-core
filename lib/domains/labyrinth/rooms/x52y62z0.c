inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 62, 0 }));
  set_short( "Corridor - x52y62z0" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y62z0.c",
  "east" : DIR+"/rooms/x53y62z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
