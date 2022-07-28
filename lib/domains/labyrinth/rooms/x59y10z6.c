inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 10, 6 }));
  set_short( "Corridor - x59y10z6" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y10z6.c",
  "south" : DIR+"/rooms/x59y9z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
