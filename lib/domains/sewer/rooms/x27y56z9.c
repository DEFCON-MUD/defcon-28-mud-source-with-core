inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 9 }));
  set_short( "Corridor - x27y56z9" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z9.c",
  "east" : DIR+"/rooms/x28y56z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
