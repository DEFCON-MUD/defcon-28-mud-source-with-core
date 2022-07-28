inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 27, 3 }));
  set_short( "Passage - x47y27z3" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y28z3.c",
  "south" : DIR+"/rooms/x47y26z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
