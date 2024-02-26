inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 7 }));
  set_short( "Hallway - x45y8z7" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y8z7.c",
  "south" : DIR+"/rooms/x45y7z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
