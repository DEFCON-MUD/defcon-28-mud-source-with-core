inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 3 }));
  set_short( "Passage - x25y58z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y59z3.c",
  "south" : DIR+"/rooms/x25y57z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
