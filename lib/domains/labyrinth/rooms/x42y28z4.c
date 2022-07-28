inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 28, 4 }));
  set_short( "Corridor - x42y28z4" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y28z4.c",
  "east" : DIR+"/rooms/x43y28z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
