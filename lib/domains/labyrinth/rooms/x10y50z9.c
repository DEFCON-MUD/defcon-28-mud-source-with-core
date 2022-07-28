inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 50, 9 }));
  set_short( "Hallway - x10y50z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y50z9.c",
  "east" : DIR+"/rooms/x11y50z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
