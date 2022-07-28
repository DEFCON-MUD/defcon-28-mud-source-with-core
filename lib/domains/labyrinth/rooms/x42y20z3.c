inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 20, 3 }));
  set_short( "Passage - x42y20z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y20z3.c",
  "east" : DIR+"/rooms/x43y20z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
