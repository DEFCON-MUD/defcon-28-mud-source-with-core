inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 2 }));
  set_short( "Hallway - x3y40z2" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y40z2.c",
  "east" : DIR+"/rooms/x4y40z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
