inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 45, 2 }));
  set_short( "Corridor - x11y45z2" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y46z2.c",
  "south" : DIR+"/rooms/x11y44z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
