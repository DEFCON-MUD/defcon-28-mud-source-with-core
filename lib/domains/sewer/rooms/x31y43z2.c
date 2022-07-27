inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 43, 2 }));
  set_short( "Hallway - x31y43z2" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y44z2.c",
  "south" : DIR+"/rooms/x31y42z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
