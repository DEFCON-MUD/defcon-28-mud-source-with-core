inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 23, 0 }));
  set_short( "Hallway - x39y23z0" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y24z0.c",
  "south" : DIR+"/rooms/x39y22z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
