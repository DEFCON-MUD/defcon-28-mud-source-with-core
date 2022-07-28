inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 3 }));
  set_short( "Hallway - x29y10z3" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y10z3.c",
  "south" : DIR+"/rooms/x29y9z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
