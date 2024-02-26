inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 1 }));
  set_short( "Hallway - x53y4z1" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y4z1.c",
  "east" : DIR+"/rooms/x54y4z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
