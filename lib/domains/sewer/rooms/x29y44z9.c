inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 9 }));
  set_short( "Corridor - x29y44z9" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z9.c",
  "south" : DIR+"/rooms/x29y43z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
