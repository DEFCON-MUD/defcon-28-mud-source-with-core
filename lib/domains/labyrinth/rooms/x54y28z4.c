inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 28, 4 }));
  set_short( "Passage - x54y28z4" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y28z4.c",
  "east" : DIR+"/rooms/x55y28z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
