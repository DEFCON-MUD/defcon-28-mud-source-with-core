inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 4 }));
  set_short( "Passage - x27y56z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z4.c",
  "north" : DIR+"/rooms/x27y57z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
