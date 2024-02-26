inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 47, 9 }));
  set_short( "Passage - x47y47z9" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y48z9.c",
  "south" : DIR+"/rooms/x47y46z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
