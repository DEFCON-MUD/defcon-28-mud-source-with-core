inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 3 }));
  set_short( "Corridor - x37y50z3" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y50z3.c",
  "east" : DIR+"/rooms/x38y50z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
