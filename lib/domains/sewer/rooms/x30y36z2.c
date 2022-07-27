inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 36, 2 }));
  set_short( "Corridor - x30y36z2" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y36z2.c",
  "east" : DIR+"/rooms/x31y36z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
