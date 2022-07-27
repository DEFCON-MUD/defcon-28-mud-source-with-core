inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 50, 6 }));
  set_short( "Hallway - x59y50z6" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y50z6.c",
  "south" : DIR+"/rooms/x59y49z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
