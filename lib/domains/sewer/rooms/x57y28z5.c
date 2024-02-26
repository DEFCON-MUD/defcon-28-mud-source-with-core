inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 28, 5 }));
  set_short( "Passage - x57y28z5" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y28z5.c",
  "south" : DIR+"/rooms/x57y27z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
