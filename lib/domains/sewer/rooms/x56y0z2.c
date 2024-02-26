inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 2 }));
  set_short( "Corridor - x56y0z2" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z2.c",
  "east" : DIR+"/rooms/x57y0z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
