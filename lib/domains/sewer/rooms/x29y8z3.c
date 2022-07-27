inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 3 }));
  set_short( "Corridor - x29y8z3" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y8z3.c",
  "north" : DIR+"/rooms/x29y9z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
