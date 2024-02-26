inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 18, 5 }));
  set_short( "Hallway - x50y18z5" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y18z5.c",
  "east" : DIR+"/rooms/x51y18z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
