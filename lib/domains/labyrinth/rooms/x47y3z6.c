inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 3, 6 }));
  set_short( "Passage - x47y3z6" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y4z6.c",
  "south" : DIR+"/rooms/x47y2z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
