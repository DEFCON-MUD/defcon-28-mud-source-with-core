inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 35, 3 }));
  set_short( "Corridor - x17y35z3" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y36z3.c",
  "south" : DIR+"/rooms/x17y34z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
