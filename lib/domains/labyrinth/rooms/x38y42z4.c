inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 42, 4 }));
  set_short( "Hallway - x38y42z4" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y42z4.c",
  "east" : DIR+"/rooms/x39y42z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
