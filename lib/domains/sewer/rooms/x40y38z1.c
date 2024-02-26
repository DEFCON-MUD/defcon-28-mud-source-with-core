inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 38, 1 }));
  set_short( "Passage - x40y38z1" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y38z1.c",
  "east" : DIR+"/rooms/x41y38z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
