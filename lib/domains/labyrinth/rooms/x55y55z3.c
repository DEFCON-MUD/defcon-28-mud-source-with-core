inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 55, 3 }));
  set_short( "Passage - x55y55z3" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y56z3.c",
  "south" : DIR+"/rooms/x55y54z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
