inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 6, 8 }));
  set_short( "Corridor - x31y6z8" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y6z8.c",
  "east" : DIR+"/rooms/x32y6z8.c",
  "north" : DIR+"/rooms/x31y7z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
