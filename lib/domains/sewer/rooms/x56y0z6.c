inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 6 }));
  set_short( "Hallway - x56y0z6" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z6.c",
  "east" : DIR+"/rooms/x57y0z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
