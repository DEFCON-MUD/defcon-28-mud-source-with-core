inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 60, 7 }));
  set_short( "Hallway - x36y60z7" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y60z7.c",
  "east" : DIR+"/rooms/x37y60z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
