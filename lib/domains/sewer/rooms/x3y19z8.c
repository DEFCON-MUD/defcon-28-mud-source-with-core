inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 19, 8 }));
  set_short( "Corridor - x3y19z8" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y20z8.c",
  "south" : DIR+"/rooms/x3y18z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
