inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 16, 5 }));
  set_short( "Passage - x60y16z5" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y16z5.c",
  "east" : DIR+"/rooms/x61y16z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
