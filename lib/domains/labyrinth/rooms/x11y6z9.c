inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 9 }));
  set_short( "Passage - x11y6z9" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y6z9.c",
  "north" : DIR+"/rooms/x11y7z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
