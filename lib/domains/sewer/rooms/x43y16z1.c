inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 1 }));
  set_short( "Corridor - x43y16z1" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y17z1.c",
  "south" : DIR+"/rooms/x43y15z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
