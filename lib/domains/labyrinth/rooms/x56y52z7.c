inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 52, 7 }));
  set_short( "Passage - x56y52z7" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y52z7.c",
  "east" : DIR+"/rooms/x57y52z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
