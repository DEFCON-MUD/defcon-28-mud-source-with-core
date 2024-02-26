inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 24, 4 }));
  set_short( "Corridor - x10y24z4" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y24z4.c",
  "east" : DIR+"/rooms/x11y24z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
