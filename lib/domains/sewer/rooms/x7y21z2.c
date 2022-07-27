inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 21, 2 }));
  set_short( "Hallway - x7y21z2" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y22z2.c",
  "south" : DIR+"/rooms/x7y20z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
