inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 10, 3 }));
  set_short( "Corridor - x52y10z3" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y10z3.c",
  "east" : DIR+"/rooms/x53y10z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
