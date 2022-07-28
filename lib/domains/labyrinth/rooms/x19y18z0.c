inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 0 }));
  set_short( "Hallway - x19y18z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y19z0.c",
  "south" : DIR+"/rooms/x19y17z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
