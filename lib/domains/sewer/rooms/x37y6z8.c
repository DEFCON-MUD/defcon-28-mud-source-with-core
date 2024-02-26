inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 6, 8 }));
  set_short( "Hallway - x37y6z8" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y6z8.c",
  "north" : DIR+"/rooms/x37y7z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
