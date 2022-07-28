inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 44, 0 }));
  set_short( "Hallway - x26y44z0" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y44z0.c",
  "east" : DIR+"/rooms/x27y44z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
