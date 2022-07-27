inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 28, 2 }));
  set_short( "Passage - x32y28z2" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y28z2.c",
  "east" : DIR+"/rooms/x33y28z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
