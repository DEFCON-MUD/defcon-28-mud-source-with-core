inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 2 }));
  set_short( "Hallway - x33y58z2" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y58z2.c",
  "north" : DIR+"/rooms/x33y59z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
