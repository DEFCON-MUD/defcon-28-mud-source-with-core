inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 8 }));
  set_short( "Hallway - x47y6z8" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y6z8.c",
  "east" : DIR+"/rooms/x48y6z8.c",
  "north" : DIR+"/rooms/x47y7z8.c",
  "south" : DIR+"/rooms/x47y5z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
