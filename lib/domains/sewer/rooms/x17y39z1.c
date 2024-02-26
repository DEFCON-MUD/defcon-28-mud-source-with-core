inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 39, 1 }));
  set_short( "Passage - x17y39z1" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y40z1.c",
  "south" : DIR+"/rooms/x17y38z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
