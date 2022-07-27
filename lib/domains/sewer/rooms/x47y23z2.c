inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 23, 2 }));
  set_short( "Passage - x47y23z2" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y24z2.c",
  "south" : DIR+"/rooms/x47y22z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
