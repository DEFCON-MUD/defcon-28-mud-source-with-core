inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 23, 9 }));
  set_short( "Corridor - x15y23z9" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y24z9.c",
  "south" : DIR+"/rooms/x15y22z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
