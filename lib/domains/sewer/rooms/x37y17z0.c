inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 0 }));
  set_short( "Corridor - x37y17z0" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z0.c",
  "south" : DIR+"/rooms/x37y16z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
