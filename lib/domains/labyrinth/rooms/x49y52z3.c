inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 52, 3 }));
  set_short( "Corridor - x49y52z3" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y52z3.c",
  "south" : DIR+"/rooms/x49y51z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
