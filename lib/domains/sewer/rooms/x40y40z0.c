inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 40, 0 }));
  set_short( "Hallway - x40y40z0" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y40z0.c",
  "east" : DIR+"/rooms/x41y40z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
