inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 4 }));
  set_short( "Passage - x11y8z4" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y8z4.c",
  "south" : DIR+"/rooms/x11y7z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
