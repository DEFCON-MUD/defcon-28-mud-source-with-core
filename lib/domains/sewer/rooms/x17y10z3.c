inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 3 }));
  set_short( "Corridor - x17y10z3" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y10z3.c",
  "north" : DIR+"/rooms/x17y11z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
