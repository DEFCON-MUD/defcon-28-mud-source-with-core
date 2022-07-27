inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 3, 6 }));
  set_short( "Hallway - x47y3z6" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y4z6.c",
  "south" : DIR+"/rooms/x47y2z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
