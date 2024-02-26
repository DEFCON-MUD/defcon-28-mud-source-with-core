inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 9 }));
  set_short( "Corridor - x9y54z9" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y54z9.c",
  "north" : DIR+"/rooms/x9y55z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
