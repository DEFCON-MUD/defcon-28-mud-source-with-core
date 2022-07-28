inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 4 }));
  set_short( "Hallway - x17y54z4" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y54z4.c",
  "south" : DIR+"/rooms/x17y53z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
