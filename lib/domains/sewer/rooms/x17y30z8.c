inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 30, 8 }));
  set_short( "Passage - x17y30z8" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y31z8.c",
  "south" : DIR+"/rooms/x17y29z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
