inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 3 }));
  set_short( "Hallway - x35y38z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y38z3.c",
  "east" : DIR+"/rooms/x36y38z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
