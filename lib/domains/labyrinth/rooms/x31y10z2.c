inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 2 }));
  set_short( "Corridor - x31y10z2" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y10z2.c",
  "south" : DIR+"/rooms/x31y9z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
