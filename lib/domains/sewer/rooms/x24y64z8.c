inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 64, 8 }));
  set_short( "Passage - x24y64z8" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y64z8.c",
  "east" : DIR+"/rooms/x25y64z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
