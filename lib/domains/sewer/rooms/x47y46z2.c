inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 2 }));
  set_short( "Passage - x47y46z2" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y46z2.c",
  "south" : DIR+"/rooms/x47y45z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
