inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 46, 6 }));
  set_short( "Hallway - x12y46z6" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y46z6.c",
  "east" : DIR+"/rooms/x13y46z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
