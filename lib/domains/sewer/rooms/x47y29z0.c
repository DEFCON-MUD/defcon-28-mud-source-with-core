inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 29, 0 }));
  set_short( "Hallway - x47y29z0" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y30z0.c",
  "south" : DIR+"/rooms/x47y28z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
