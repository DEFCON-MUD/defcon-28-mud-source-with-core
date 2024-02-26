inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 52, 8 }));
  set_short( "Passage - x42y52z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y52z8.c",
  "east" : DIR+"/rooms/x43y52z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
