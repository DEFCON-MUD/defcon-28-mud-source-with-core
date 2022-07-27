inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 5 }));
  set_short( "Hallway - x9y41z5" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z5.c",
  "south" : DIR+"/rooms/x9y40z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
