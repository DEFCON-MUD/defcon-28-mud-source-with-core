inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 9 }));
  set_short( "Corridor - x53y22z9" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y23z9.c",
  "south" : DIR+"/rooms/x53y21z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
