inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 10, 9 }));
  set_short( "Hallway - x47y10z9" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y10z9.c",
  "north" : DIR+"/rooms/x47y11z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
