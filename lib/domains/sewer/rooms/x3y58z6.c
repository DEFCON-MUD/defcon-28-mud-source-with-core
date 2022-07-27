inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 58, 6 }));
  set_short( "Passage - x3y58z6" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y58z6.c",
  "east" : DIR+"/rooms/x4y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
