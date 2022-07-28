inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 18, 1 }));
  set_short( "Corridor - x60y18z1" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y18z1.c",
  "east" : DIR+"/rooms/x61y18z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
