inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 56, 8 }));
  set_short( "Corridor - x36y56z8" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y56z8.c",
  "east" : DIR+"/rooms/x37y56z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
