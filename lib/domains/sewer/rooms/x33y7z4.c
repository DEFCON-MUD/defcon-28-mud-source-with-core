inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 7, 4 }));
  set_short( "Hallway - x33y7z4" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y8z4.c",
  "south" : DIR+"/rooms/x33y6z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
