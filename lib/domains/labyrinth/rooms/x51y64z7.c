inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 64, 7 }));
  set_short( "Corridor - x51y64z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y64z7.c",
  "east" : DIR+"/rooms/x52y64z7.c",
  "south" : DIR+"/rooms/x51y63z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
