inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 10, 7 }));
  set_short( "Corridor - x47y10z7" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y10z7.c",
  "east" : DIR+"/rooms/x48y10z7.c",
  "south" : DIR+"/rooms/x47y9z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
