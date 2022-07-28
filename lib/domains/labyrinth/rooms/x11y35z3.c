inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 35, 3 }));
  set_short( "Corridor - x11y35z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y36z3.c",
  "south" : DIR+"/rooms/x11y34z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
