inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 24, 6 }));
  set_short( "Passage - x31y24z6" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y24z6.c",
  "east" : DIR+"/rooms/x32y24z6.c",
  "south" : DIR+"/rooms/x31y23z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
