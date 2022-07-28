inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 12, 1 }));
  set_short( "Corridor - x38y12z1" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y12z1.c",
  "east" : DIR+"/rooms/x39y12z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
