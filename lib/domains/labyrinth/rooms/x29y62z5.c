inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 62, 5 }));
  set_short( "Corridor - x29y62z5" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y62z5.c",
  "south" : DIR+"/rooms/x29y61z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
