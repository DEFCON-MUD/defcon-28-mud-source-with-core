inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 6 }));
  set_short( "Corridor - x31y14z6" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y14z6.c",
  "south" : DIR+"/rooms/x31y13z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
