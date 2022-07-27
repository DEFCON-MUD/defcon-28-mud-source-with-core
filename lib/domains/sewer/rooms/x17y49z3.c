inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 49, 3 }));
  set_short( "Hallway - x17y49z3" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y50z3.c",
  "south" : DIR+"/rooms/x17y48z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
