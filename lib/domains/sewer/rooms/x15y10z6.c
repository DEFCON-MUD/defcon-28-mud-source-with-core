inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 10, 6 }));
  set_short( "Passage - x15y10z6" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y10z6.c",
  "east" : DIR+"/rooms/x16y10z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
