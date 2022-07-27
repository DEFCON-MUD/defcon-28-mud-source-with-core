inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 48, 5 }));
  set_short( "Passage - x37y48z5" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y48z5.c",
  "south" : DIR+"/rooms/x37y47z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
