inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 42, 3 }));
  set_short( "Hallway - x38y42z3" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y42z3.c",
  "east" : DIR+"/rooms/x39y42z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
