inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 59, 0 }));
  set_short( "Corridor - x21y59z0" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y60z0.c",
  "south" : DIR+"/rooms/x21y58z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
