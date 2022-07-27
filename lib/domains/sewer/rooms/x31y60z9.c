inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 60, 9 }));
  set_short( "Hallway - x31y60z9" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y60z9.c",
  "south" : DIR+"/rooms/x31y59z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
