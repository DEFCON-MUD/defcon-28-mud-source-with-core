inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 2 }));
  set_short( "Passage - x61y36z2" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y37z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north.%^RESET%^");
}
