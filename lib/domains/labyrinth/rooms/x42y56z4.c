inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 56, 4 }));
  set_short( "Passage - x42y56z4" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y56z4.c",
  "east" : DIR+"/rooms/x43y56z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
