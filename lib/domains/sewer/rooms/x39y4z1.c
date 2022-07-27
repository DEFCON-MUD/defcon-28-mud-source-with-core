inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 4, 1 }));
  set_short( "Passage - x39y4z1" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y4z1.c",
  "south" : DIR+"/rooms/x39y3z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
