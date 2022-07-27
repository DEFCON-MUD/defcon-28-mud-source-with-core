inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 46, 6 }));
  set_short( "Hallway - x39y46z6" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y46z6.c",
  "north" : DIR+"/rooms/x39y47z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
