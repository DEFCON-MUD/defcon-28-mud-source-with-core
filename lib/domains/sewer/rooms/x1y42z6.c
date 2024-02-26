inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 6 }));
  set_short( "Corridor - x1y42z6" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y43z6.c",
  "south" : DIR+"/rooms/x1y41z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
