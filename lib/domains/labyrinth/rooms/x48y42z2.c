inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 42, 2 }));
  set_short( "Corridor - x48y42z2" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y42z2.c",
  "east" : DIR+"/rooms/x49y42z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
