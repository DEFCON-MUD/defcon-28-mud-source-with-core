inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 51, 9 }));
  set_short( "Passage - x51y51z9" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y52z9.c",
  "south" : DIR+"/rooms/x51y50z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
