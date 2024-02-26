inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 34, 9 }));
  set_short( "Passage - x9y34z9" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y34z9.c",
  "north" : DIR+"/rooms/x9y35z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
