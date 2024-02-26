inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 2, 8 }));
  set_short( "Passage - x17y2z8" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y2z8.c",
  "north" : DIR+"/rooms/x17y3z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
