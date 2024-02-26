inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 60, 4 }));
  set_short( "Corridor - x18y60z4" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y60z4.c",
  "east" : DIR+"/rooms/x19y60z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
