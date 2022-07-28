inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 46, 3 }));
  set_short( "Corridor - x8y46z3" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y46z3.c",
  "east" : DIR+"/rooms/x9y46z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
