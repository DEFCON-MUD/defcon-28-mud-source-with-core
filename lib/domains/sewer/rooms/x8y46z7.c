inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 46, 7 }));
  set_short( "Passage - x8y46z7" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y46z7.c",
  "east" : DIR+"/rooms/x9y46z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
