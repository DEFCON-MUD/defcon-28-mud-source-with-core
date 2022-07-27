inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 9 }));
  set_short( "Corridor - x51y56z9" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y56z9.c",
  "east" : DIR+"/rooms/x52y56z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
