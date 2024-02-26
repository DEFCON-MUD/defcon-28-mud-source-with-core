inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 1 }));
  set_short( "Passage - x17y22z1" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y22z1.c",
  "east" : DIR+"/rooms/x18y22z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
