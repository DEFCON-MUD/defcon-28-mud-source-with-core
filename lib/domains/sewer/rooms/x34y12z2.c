inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 12, 2 }));
  set_short( "Passage - x34y12z2" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y12z2.c",
  "east" : DIR+"/rooms/x35y12z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
