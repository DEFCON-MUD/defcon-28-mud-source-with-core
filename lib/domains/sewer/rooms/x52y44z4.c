inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 44, 4 }));
  set_short( "Hallway - x52y44z4" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y44z4.c",
  "east" : DIR+"/rooms/x53y44z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
