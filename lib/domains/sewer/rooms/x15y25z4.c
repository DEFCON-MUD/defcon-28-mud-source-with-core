inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 25, 4 }));
  set_short( "Hallway - x15y25z4" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y26z4.c",
  "south" : DIR+"/rooms/x15y24z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
