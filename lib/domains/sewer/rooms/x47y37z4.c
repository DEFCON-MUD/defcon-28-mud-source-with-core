inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 37, 4 }));
  set_short( "Hallway - x47y37z4" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y38z4.c",
  "south" : DIR+"/rooms/x47y36z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
