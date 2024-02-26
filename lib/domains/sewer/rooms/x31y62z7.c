inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 7 }));
  set_short( "Passage - x31y62z7" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y62z7.c",
  "east" : DIR+"/rooms/x32y62z7.c",
  "south" : DIR+"/rooms/x31y61z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
