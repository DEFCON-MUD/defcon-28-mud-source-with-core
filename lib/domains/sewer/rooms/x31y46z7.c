inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 46, 7 }));
  set_short( "Passage - x31y46z7" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y46z7.c",
  "south" : DIR+"/rooms/x31y45z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
