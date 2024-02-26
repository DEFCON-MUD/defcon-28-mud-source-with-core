inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 12, 8 }));
  set_short( "Hallway - x21y12z8" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y12z8.c",
  "south" : DIR+"/rooms/x21y11z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
