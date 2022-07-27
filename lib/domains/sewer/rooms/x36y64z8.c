inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 64, 8 }));
  set_short( "Hallway - x36y64z8" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y64z8.c",
  "east" : DIR+"/rooms/x37y64z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
