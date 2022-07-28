inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 57, 3 }));
  set_short( "Passage - x13y57z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y58z3.c",
  "south" : DIR+"/rooms/x13y56z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
