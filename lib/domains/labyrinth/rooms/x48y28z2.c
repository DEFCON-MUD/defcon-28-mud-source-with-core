inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 28, 2 }));
  set_short( "Corridor - x48y28z2" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y28z2.c",
  "east" : DIR+"/rooms/x49y28z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
