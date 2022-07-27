inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 47, 4 }));
  set_short( "Passage - x3y47z4" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y48z4.c",
  "south" : DIR+"/rooms/x3y46z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
