inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 60, 8 }));
  set_short( "Corridor - x43y60z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y60z8.c",
  "south" : DIR+"/rooms/x43y59z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
