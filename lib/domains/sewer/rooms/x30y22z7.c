inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 22, 7 }));
  set_short( "Hallway - x30y22z7" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y22z7.c",
  "east" : DIR+"/rooms/x31y22z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
