inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 6 }));
  set_short( "Corridor - x1y18z6" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z6.c",
  "north" : DIR+"/rooms/x1y19z6.c",
  "south" : DIR+"/rooms/x1y17z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
