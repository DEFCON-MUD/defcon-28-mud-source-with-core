inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 22, 1 }));
  set_short( "Hallway - x25y22z1" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y22z1.c",
  "east" : DIR+"/rooms/x26y22z1.c",
  "north" : DIR+"/rooms/x25y23z1.c",
  "south" : DIR+"/rooms/x25y21z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
