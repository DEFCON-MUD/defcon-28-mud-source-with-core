inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 2, 6 }));
  set_short( "Hallway - x10y2z6" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y2z6.c",
  "east" : DIR+"/rooms/x11y2z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
