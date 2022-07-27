inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 38, 6 }));
  set_short( "Corridor - x42y38z6" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y38z6.c",
  "east" : DIR+"/rooms/x43y38z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
