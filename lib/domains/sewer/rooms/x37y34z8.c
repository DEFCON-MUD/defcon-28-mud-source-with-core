inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 34, 8 }));
  set_short( "Corridor - x37y34z8" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y34z8.c",
  "south" : DIR+"/rooms/x37y33z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
