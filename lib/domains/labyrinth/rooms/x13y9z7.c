inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 9, 7 }));
  set_short( "Passage - x13y9z7" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y10z7.c",
  "south" : DIR+"/rooms/x13y8z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
