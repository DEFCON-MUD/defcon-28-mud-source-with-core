inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 27, 9 }));
  set_short( "Corridor - x35y27z9" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y28z9.c",
  "south" : DIR+"/rooms/x35y26z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
