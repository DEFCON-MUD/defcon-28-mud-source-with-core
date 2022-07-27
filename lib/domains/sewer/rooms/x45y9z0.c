inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 9, 0 }));
  set_short( "Passage - x45y9z0" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y10z0.c",
  "south" : DIR+"/rooms/x45y8z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
