inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 40, 4 }));
  set_short( "Corridor - x27y40z4" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y40z4.c",
  "east" : DIR+"/rooms/x28y40z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
