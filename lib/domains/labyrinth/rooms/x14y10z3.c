inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 10, 3 }));
  set_short( "Corridor - x14y10z3" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y10z3.c",
  "east" : DIR+"/rooms/x15y10z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
