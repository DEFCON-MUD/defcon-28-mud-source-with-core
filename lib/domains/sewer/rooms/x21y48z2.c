inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 48, 2 }));
  set_short( "Hallway - x21y48z2" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y48z2.c",
  "south" : DIR+"/rooms/x21y47z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
