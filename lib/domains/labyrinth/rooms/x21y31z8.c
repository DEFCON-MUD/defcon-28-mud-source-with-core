inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 31, 8 }));
  set_short( "Corridor - x21y31z8" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y32z8.c",
  "south" : DIR+"/rooms/x21y30z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
