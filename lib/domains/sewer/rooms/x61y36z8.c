inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 8 }));
  set_short( "Corridor - x61y36z8" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y36z8.c",
  "north" : DIR+"/rooms/x61y37z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
