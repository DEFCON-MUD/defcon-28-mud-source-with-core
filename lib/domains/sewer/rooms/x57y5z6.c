inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 5, 6 }));
  set_short( "Passage - x57y5z6" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y6z6.c",
  "south" : DIR+"/rooms/x57y4z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
