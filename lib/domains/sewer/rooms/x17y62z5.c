inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 62, 5 }));
  set_short( "Hallway - x17y62z5" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y62z5.c",
  "east" : DIR+"/rooms/x18y62z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
