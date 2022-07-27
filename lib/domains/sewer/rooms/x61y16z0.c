inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 0 }));
  set_short( "Corridor - x61y16z0" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y17z0.c",
  "south" : DIR+"/rooms/x61y15z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
