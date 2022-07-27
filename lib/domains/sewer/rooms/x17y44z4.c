inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 4 }));
  set_short( "Corridor - x17y44z4" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y44z4.c",
  "north" : DIR+"/rooms/x17y45z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
