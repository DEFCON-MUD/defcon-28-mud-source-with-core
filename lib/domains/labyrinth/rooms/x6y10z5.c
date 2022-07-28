inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 10, 5 }));
  set_short( "Corridor - x6y10z5" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y10z5.c",
  "east" : DIR+"/rooms/x7y10z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
