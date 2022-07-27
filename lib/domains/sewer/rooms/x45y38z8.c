inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 38, 8 }));
  set_short( "Hallway - x45y38z8" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y38z8.c",
  "south" : DIR+"/rooms/x45y37z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
