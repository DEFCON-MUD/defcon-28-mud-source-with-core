inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 54, 4 }));
  set_short( "Hallway - x27y54z4" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y54z4.c",
  "south" : DIR+"/rooms/x27y53z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
