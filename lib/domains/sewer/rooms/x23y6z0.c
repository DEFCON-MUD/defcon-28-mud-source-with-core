inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 0 }));
  set_short( "Hallway - x23y6z0" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y6z0.c",
  "south" : DIR+"/rooms/x23y5z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
