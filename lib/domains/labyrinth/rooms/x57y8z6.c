inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 8, 6 }));
  set_short( "Hallway - x57y8z6" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y9z6.c",
  "south" : DIR+"/rooms/x57y7z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
