inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 22, 7 }));
  set_short( "Corridor - x11y22z7" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y22z7.c",
  "north" : DIR+"/rooms/x11y23z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
