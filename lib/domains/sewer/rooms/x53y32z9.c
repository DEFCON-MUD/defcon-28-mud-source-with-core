inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 9 }));
  set_short( "Passage - x53y32z9" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y32z9.c",
  "north" : DIR+"/rooms/x53y33z9.c",
  "south" : DIR+"/rooms/x53y31z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
