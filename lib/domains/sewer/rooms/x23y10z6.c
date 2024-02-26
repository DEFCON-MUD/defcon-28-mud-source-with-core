inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 6 }));
  set_short( "Hallway - x23y10z6" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y10z6.c",
  "north" : DIR+"/rooms/x23y11z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
