inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 0 }));
  set_short( "Hallway - x9y28z0" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y28z0.c",
  "east" : DIR+"/rooms/x10y28z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
