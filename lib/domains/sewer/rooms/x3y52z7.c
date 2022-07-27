inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 52, 7 }));
  set_short( "Corridor - x3y52z7" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y52z7.c",
  "south" : DIR+"/rooms/x3y51z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
