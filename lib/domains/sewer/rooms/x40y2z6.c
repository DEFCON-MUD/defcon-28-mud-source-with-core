inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 2, 6 }));
  set_short( "Hallway - x40y2z6" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y2z6.c",
  "east" : DIR+"/rooms/x41y2z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
