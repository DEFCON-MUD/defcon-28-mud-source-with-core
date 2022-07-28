inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 51, 4 }));
  set_short( "Corridor - x15y51z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y52z4.c",
  "south" : DIR+"/rooms/x15y50z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
