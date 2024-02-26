inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 40, 5 }));
  set_short( "Corridor - x30y40z5" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y40z5.c",
  "east" : DIR+"/rooms/x31y40z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
