inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 51, 2 }));
  set_short( "Corridor - x11y51z2" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y52z2.c",
  "south" : DIR+"/rooms/x11y50z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
