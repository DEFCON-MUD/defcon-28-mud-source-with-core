inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 8 }));
  set_short( "Passage - x53y64z8" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z8.c",
  "east" : DIR+"/rooms/x54y64z8.c",
  "south" : DIR+"/rooms/x53y63z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
