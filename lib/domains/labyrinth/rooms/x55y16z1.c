inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 1 }));
  set_short( "Passage - x55y16z1" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y16z1.c",
  "east" : DIR+"/rooms/x56y16z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
