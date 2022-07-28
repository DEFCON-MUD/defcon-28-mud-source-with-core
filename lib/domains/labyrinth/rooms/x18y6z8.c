inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 6, 8 }));
  set_short( "Corridor - x18y6z8" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y6z8.c",
  "east" : DIR+"/rooms/x19y6z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
