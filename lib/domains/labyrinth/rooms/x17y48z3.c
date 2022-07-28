inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 3 }));
  set_short( "Passage - x17y48z3" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y49z3.c",
  "south" : DIR+"/rooms/x17y47z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
