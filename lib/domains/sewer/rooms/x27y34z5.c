inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 5 }));
  set_short( "Passage - x27y34z5" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y34z5.c",
  "north" : DIR+"/rooms/x27y35z5.c",
  "south" : DIR+"/rooms/x27y33z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
