inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 4 }));
  set_short( "Corridor - x15y0z4" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z4.c",
  "east" : DIR+"/rooms/x16y0z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
