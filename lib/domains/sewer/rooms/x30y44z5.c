inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 44, 5 }));
  set_short( "Hallway - x30y44z5" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y44z5.c",
  "east" : DIR+"/rooms/x31y44z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
