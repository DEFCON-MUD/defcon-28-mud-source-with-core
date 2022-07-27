inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 25, 4 }));
  set_short( "Hallway - x59y25z4" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y26z4.c",
  "south" : DIR+"/rooms/x59y24z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
