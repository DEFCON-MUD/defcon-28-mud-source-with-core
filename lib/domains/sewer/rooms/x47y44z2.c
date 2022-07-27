inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 2 }));
  set_short( "Corridor - x47y44z2" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y44z2.c",
  "north" : DIR+"/rooms/x47y45z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
