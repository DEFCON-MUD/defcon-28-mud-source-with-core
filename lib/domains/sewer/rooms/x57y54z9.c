inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 9 }));
  set_short( "Hallway - x57y54z9" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y54z9.c",
  "south" : DIR+"/rooms/x57y53z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
