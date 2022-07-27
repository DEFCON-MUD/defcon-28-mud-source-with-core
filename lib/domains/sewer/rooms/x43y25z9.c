inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 25, 9 }));
  set_short( "Passage - x43y25z9" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y26z9.c",
  "south" : DIR+"/rooms/x43y24z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
