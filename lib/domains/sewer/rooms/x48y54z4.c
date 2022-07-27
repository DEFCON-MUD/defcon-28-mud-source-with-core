inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 54, 4 }));
  set_short( "Corridor - x48y54z4" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y54z4.c",
  "east" : DIR+"/rooms/x49y54z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
