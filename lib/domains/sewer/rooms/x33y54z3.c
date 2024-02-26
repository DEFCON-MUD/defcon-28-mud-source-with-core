inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 3 }));
  set_short( "Passage - x33y54z3" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y54z3.c",
  "south" : DIR+"/rooms/x33y53z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
