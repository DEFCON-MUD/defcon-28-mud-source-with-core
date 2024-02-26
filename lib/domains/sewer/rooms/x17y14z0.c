inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 0 }));
  set_short( "Passage - x17y14z0" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y14z0.c",
  "south" : DIR+"/rooms/x17y13z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
