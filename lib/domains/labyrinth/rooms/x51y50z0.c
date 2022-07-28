inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 50, 0 }));
  set_short( "Corridor - x51y50z0" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y50z0.c",
  "east" : DIR+"/rooms/x52y50z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
