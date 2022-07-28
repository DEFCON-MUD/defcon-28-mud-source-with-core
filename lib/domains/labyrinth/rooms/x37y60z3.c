inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 60, 3 }));
  set_short( "Corridor - x37y60z3" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y60z3.c",
  "east" : DIR+"/rooms/x38y60z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
