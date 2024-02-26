inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 46, 5 }));
  set_short( "Corridor - x29y46z5" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y46z5.c",
  "south" : DIR+"/rooms/x29y45z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
