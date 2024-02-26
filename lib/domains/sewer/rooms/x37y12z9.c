inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 12, 9 }));
  set_short( "Hallway - x37y12z9" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y12z9.c",
  "south" : DIR+"/rooms/x37y11z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
