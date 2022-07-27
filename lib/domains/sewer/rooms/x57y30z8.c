inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 8 }));
  set_short( "Passage - x57y30z8" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y31z8.c",
  "south" : DIR+"/rooms/x57y29z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
