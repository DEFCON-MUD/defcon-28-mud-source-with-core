inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 8 }));
  set_short( "Hallway - x27y46z8" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y46z8.c",
  "south" : DIR+"/rooms/x27y45z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
