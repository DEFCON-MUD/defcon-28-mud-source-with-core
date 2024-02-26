inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 64, 6 }));
  set_short( "Corridor - x28y64z6" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y64z6.c",
  "east" : DIR+"/rooms/x29y64z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
