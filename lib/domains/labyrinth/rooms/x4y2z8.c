inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 2, 8 }));
  set_short( "Passage - x4y2z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y2z8.c",
  "east" : DIR+"/rooms/x5y2z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
