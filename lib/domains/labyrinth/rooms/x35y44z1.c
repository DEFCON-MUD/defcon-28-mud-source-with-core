inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 44, 1 }));
  set_short( "Corridor - x35y44z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y44z1.c",
  "east" : DIR+"/rooms/x36y44z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
