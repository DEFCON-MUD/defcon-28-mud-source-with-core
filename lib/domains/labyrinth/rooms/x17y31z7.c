inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 31, 7 }));
  set_short( "Hallway - x17y31z7" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y32z7.c",
  "south" : DIR+"/rooms/x17y30z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
