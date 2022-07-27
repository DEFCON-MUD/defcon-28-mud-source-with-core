inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 7 }));
  set_short( "Corridor - x9y56z7" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y56z7.c",
  "east" : DIR+"/rooms/x10y56z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
