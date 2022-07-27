inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 18, 6 }));
  set_short( "Passage - x39y18z6" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y18z6.c",
  "north" : DIR+"/rooms/x39y19z6.c",
  "south" : DIR+"/rooms/x39y17z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
