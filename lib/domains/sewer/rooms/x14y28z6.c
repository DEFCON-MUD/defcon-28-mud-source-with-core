inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 28, 6 }));
  set_short( "Corridor - x14y28z6" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y28z6.c",
  "east" : DIR+"/rooms/x15y28z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
