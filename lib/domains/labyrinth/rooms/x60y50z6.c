inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 50, 6 }));
  set_short( "Passage - x60y50z6" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y50z6.c",
  "east" : DIR+"/rooms/x61y50z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
