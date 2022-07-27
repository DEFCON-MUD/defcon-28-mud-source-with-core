inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 18, 4 }));
  set_short( "Hallway - x6y18z4" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y18z4.c",
  "east" : DIR+"/rooms/x7y18z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
