inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 8 }));
  set_short( "Corridor - x1y10z8" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y11z8.c",
  "south" : DIR+"/rooms/x1y9z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
