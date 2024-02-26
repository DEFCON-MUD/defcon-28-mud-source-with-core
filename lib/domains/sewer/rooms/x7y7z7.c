inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 7, 7 }));
  set_short( "Passage - x7y7z7" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y8z7.c",
  "south" : DIR+"/rooms/x7y6z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
