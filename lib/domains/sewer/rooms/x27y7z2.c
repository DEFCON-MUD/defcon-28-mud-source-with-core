inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 2 }));
  set_short( "Passage - x27y7z2" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z2.c",
  "south" : DIR+"/rooms/x27y6z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
