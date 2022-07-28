inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 9 }));
  set_short( "Corridor - x11y20z9" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y20z9.c",
  "north" : DIR+"/rooms/x11y21z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
