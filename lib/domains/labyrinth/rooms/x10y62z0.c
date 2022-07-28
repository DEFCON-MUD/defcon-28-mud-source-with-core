inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 62, 0 }));
  set_short( "Passage - x10y62z0" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y62z0.c",
  "east" : DIR+"/rooms/x11y62z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
