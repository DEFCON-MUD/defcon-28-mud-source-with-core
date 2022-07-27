inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 52, 5 }));
  set_short( "Corridor - x1y52z5" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y52z5.c",
  "south" : DIR+"/rooms/x1y51z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
