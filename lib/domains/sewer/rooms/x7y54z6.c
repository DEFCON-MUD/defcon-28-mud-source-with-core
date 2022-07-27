inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 54, 6 }));
  set_short( "Passage - x7y54z6" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y54z6.c",
  "north" : DIR+"/rooms/x7y55z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
