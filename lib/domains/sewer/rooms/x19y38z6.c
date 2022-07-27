inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 6 }));
  set_short( "Hallway - x19y38z6" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y39z6.c",
  "south" : DIR+"/rooms/x19y37z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
