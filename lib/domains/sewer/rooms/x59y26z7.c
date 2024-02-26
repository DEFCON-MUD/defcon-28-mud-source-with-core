inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 26, 7 }));
  set_short( "Passage - x59y26z7" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y26z7.c",
  "south" : DIR+"/rooms/x59y25z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
