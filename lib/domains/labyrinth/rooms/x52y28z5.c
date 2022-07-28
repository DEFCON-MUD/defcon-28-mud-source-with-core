inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 28, 5 }));
  set_short( "Passage - x52y28z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y28z5.c",
  "east" : DIR+"/rooms/x53y28z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
