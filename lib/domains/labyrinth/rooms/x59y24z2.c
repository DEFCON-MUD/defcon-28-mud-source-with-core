inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 2 }));
  set_short( "Corridor - x59y24z2" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z2.c",
  "east" : DIR+"/rooms/x60y24z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
