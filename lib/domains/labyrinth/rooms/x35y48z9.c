inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 48, 9 }));
  set_short( "Corridor - x35y48z9" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y48z9.c",
  "south" : DIR+"/rooms/x35y47z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
