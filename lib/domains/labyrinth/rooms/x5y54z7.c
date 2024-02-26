inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 7 }));
  set_short( "Corridor - x5y54z7" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y54z7.c",
  "east" : DIR+"/rooms/x6y54z7.c",
  "north" : DIR+"/rooms/x5y55z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
