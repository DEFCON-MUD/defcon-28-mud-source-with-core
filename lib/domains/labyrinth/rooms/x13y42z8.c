inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 42, 8 }));
  set_short( "Hallway - x13y42z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y42z8.c",
  "south" : DIR+"/rooms/x13y41z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
