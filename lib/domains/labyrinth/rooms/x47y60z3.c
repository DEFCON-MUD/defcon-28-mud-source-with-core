inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 60, 3 }));
  set_short( "Hallway - x47y60z3" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y60z3.c",
  "east" : DIR+"/rooms/x48y60z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
