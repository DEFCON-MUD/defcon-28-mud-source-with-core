inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 20, 4 }));
  set_short( "Corridor - x26y20z4" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y20z4.c",
  "east" : DIR+"/rooms/x27y20z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
