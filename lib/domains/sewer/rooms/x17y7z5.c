inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 7, 5 }));
  set_short( "Corridor - x17y7z5" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y8z5.c",
  "south" : DIR+"/rooms/x17y6z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
