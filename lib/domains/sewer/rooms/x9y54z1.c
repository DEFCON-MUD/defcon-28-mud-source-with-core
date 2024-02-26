inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 1 }));
  set_short( "Corridor - x9y54z1" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y54z1.c",
  "north" : DIR+"/rooms/x9y55z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
