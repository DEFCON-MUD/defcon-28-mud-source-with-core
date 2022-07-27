inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 6, 3 }));
  set_short( "Passage - x3y6z3" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y7z3.c",
  "south" : DIR+"/rooms/x3y5z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
