inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 64, 6 }));
  set_short( "Corridor - x5y64z6" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y64z6.c",
  "east" : DIR+"/rooms/x6y64z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
