inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 24, 3 }));
  set_short( "Hallway - x32y24z3" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y24z3.c",
  "east" : DIR+"/rooms/x33y24z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
