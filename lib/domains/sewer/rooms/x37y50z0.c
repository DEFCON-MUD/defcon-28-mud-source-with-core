inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 0 }));
  set_short( "Hallway - x37y50z0" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y50z0.c",
  "south" : DIR+"/rooms/x37y49z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
