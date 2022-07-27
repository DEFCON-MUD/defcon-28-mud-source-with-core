inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 0 }));
  set_short( "Hallway - x37y16z0" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y16z0.c",
  "north" : DIR+"/rooms/x37y17z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
