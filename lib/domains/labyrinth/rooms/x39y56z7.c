inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 56, 7 }));
  set_short( "Hallway - x39y56z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y56z7.c",
  "south" : DIR+"/rooms/x39y55z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
