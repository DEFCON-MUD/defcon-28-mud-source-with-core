inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 32, 6 }));
  set_short( "Corridor - x15y32z6" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y32z6.c",
  "south" : DIR+"/rooms/x15y31z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
