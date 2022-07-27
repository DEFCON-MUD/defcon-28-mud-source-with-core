inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 24, 8 }));
  set_short( "Corridor - x25y24z8" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y24z8.c",
  "south" : DIR+"/rooms/x25y23z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
