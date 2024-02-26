inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 2, 1 }));
  set_short( "Hallway - x50y2z1" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y2z1.c",
  "east" : DIR+"/rooms/x51y2z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
