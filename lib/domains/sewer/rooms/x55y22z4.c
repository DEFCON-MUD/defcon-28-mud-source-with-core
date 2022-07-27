inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 22, 4 }));
  set_short( "Hallway - x55y22z4" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y22z4.c",
  "east" : DIR+"/rooms/x56y22z4.c",
  "north" : DIR+"/rooms/x55y23z4.c",
  "south" : DIR+"/rooms/x55y21z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
