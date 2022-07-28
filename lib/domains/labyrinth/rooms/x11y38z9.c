inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 9 }));
  set_short( "Corridor - x11y38z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y38z9.c",
  "south" : DIR+"/rooms/x11y37z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
