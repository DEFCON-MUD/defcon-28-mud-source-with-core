inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 5 }));
  set_short( "Corridor - x14y36z5" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z5.c",
  "east" : DIR+"/rooms/x15y36z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
