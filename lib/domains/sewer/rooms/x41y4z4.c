inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 4, 4 }));
  set_short( "Passage - x41y4z4" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y4z4.c",
  "east" : DIR+"/rooms/x42y4z4.c",
  "north" : DIR+"/rooms/x41y5z4.c",
  "south" : DIR+"/rooms/x41y3z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
