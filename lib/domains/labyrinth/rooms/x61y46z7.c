inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 46, 7 }));
  set_short( "Corridor - x61y46z7" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y46z7.c",
  "north" : DIR+"/rooms/x61y47z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
