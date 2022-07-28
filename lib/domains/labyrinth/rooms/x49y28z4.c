inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 4 }));
  set_short( "Corridor - x49y28z4" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y28z4.c",
  "east" : DIR+"/rooms/x50y28z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
