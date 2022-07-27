inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 4, 2 }));
  set_short( "Passage - x13y4z2" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y4z2.c",
  "east" : DIR+"/rooms/x14y4z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
