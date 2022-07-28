inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 38, 6 }));
  set_short( "Passage - x21y38z6" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y38z6.c",
  "south" : DIR+"/rooms/x21y37z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
