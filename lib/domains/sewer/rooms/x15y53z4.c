inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 53, 4 }));
  set_short( "Hallway - x15y53z4" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y54z4.c",
  "south" : DIR+"/rooms/x15y52z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
