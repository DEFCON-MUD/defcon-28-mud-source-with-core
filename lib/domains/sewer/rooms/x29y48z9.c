inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 9 }));
  set_short( "Passage - x29y48z9" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y48z9.c",
  "south" : DIR+"/rooms/x29y47z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
