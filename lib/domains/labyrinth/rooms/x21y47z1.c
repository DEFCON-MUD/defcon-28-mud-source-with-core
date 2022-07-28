inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 47, 1 }));
  set_short( "Corridor - x21y47z1" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y48z1.c",
  "south" : DIR+"/rooms/x21y46z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
