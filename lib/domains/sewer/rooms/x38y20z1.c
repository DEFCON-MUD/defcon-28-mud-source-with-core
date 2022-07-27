inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 20, 1 }));
  set_short( "Passage - x38y20z1" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y20z1.c",
  "east" : DIR+"/rooms/x39y20z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
