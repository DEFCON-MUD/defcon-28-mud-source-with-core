inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 10, 5 }));
  set_short( "Passage - x15y10z5" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y10z5.c",
  "north" : DIR+"/rooms/x15y11z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
