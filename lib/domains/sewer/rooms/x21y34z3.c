inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 34, 3 }));
  set_short( "Hallway - x21y34z3" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y34z3.c",
  "east" : DIR+"/rooms/x22y34z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
