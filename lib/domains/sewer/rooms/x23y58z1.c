inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 58, 1 }));
  set_short( "Corridor - x23y58z1" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y58z1.c",
  "east" : DIR+"/rooms/x24y58z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
