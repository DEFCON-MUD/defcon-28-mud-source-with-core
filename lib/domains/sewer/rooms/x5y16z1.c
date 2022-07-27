inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 1 }));
  set_short( "Corridor - x5y16z1" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y16z1.c",
  "north" : DIR+"/rooms/x5y17z1.c",
  "south" : DIR+"/rooms/x5y15z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
