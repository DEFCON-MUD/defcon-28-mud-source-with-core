inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 17, 9 }));
  set_short( "Corridor - x49y17z9" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y18z9.c",
  "south" : DIR+"/rooms/x49y16z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
