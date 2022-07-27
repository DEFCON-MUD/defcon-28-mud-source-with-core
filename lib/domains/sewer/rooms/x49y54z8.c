inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 8 }));
  set_short( "Passage - x49y54z8" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y54z8.c",
  "north" : DIR+"/rooms/x49y55z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
