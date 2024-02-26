inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 50, 1 }));
  set_short( "Passage - x37y50z1" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y51z1.c",
  "south" : DIR+"/rooms/x37y49z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
