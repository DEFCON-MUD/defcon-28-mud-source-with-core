inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 7 }));
  set_short( "Passage - x39y54z7" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y54z7.c",
  "north" : DIR+"/rooms/x39y55z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
