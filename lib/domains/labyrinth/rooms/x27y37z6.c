inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 37, 6 }));
  set_short( "Passage - x27y37z6" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y38z6.c",
  "south" : DIR+"/rooms/x27y36z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
