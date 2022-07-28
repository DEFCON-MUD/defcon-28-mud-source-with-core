inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 5 }));
  set_short( "Passage - x12y64z5" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z5.c",
  "east" : DIR+"/rooms/x13y64z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
