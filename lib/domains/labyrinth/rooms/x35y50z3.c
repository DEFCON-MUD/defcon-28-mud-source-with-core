inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 50, 3 }));
  set_short( "Corridor - x35y50z3" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y50z3.c",
  "east" : DIR+"/rooms/x36y50z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
