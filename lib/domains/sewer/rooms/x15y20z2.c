inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 2 }));
  set_short( "Corridor - x15y20z2" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y20z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
