inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 8 }));
  set_short( "Corridor - x29y60z8" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y60z8.c",
  "north" : DIR+"/rooms/x29y61z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
