inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 0 }));
  set_short( "Hallway - x45y10z0" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y10z0.c",
  "south" : DIR+"/rooms/x45y9z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
