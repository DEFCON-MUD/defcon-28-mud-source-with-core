inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 60, 9 }));
  set_short( "Corridor - x5y60z9" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y60z9.c",
  "north" : DIR+"/rooms/x5y61z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
