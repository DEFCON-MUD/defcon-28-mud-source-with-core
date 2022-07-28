inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 2, 8 }));
  set_short( "Corridor - x21y2z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y2z8.c",
  "east" : DIR+"/rooms/x22y2z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
