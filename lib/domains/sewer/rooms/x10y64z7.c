inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 7 }));
  set_short( "Corridor - x10y64z7" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z7.c",
  "east" : DIR+"/rooms/x11y64z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
