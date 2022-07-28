inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 28, 2 }));
  set_short( "Passage - x61y28z2" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y29z2.c",
  "south" : DIR+"/rooms/x61y27z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
