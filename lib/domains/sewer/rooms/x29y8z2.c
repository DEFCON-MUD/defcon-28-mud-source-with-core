inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 2 }));
  set_short( "Passage - x29y8z2" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y9z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north.%^RESET%^");
}
