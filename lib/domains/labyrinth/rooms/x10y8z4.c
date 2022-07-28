inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 8, 4 }));
  set_short( "Corridor - x10y8z4" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y8z4.c",
  "east" : DIR+"/rooms/x11y8z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
