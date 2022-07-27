inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 4 }));
  set_short( "Corridor - x61y32z4" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y33z4.c",
  "south" : DIR+"/rooms/x61y31z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
