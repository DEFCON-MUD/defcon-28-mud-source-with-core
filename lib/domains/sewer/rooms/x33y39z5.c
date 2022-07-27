inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 39, 5 }));
  set_short( "Passage - x33y39z5" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y40z5.c",
  "south" : DIR+"/rooms/x33y38z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
