inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 2 }));
  set_short( "Hallway - x43y4z2" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y4z2.c",
  "south" : DIR+"/rooms/x43y3z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
