inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 8, 8 }));
  set_short( "Hallway - x57y8z8" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y8z8.c",
  "east" : DIR+"/rooms/x58y8z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
