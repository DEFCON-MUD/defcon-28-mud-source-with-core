inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 8, 8 }));
  set_short( "Hallway - x28y8z8" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y8z8.c",
  "east" : DIR+"/rooms/x29y8z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
