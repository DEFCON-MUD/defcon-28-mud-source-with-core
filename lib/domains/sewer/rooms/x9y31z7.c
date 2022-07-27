inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 31, 7 }));
  set_short( "Corridor - x9y31z7" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y32z7.c",
  "south" : DIR+"/rooms/x9y30z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
