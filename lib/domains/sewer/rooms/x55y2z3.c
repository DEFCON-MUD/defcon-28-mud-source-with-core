inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 3 }));
  set_short( "Passage - x55y2z3" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y2z3.c",
  "east" : DIR+"/rooms/x56y2z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
