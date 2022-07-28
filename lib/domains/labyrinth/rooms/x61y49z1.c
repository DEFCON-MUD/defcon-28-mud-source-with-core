inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 1 }));
  set_short( "Hallway - x61y49z1" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z1.c",
  "south" : DIR+"/rooms/x61y48z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
