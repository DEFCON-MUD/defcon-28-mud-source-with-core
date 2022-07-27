inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 40, 5 }));
  set_short( "Hallway - x47y40z5" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y40z5.c",
  "south" : DIR+"/rooms/x47y39z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
