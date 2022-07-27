inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 8 }));
  set_short( "Passage - x5y24z8" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y24z8.c",
  "south" : DIR+"/rooms/x5y23z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
