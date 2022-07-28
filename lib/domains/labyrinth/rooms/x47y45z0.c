inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 45, 0 }));
  set_short( "Hallway - x47y45z0" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y46z0.c",
  "south" : DIR+"/rooms/x47y44z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
