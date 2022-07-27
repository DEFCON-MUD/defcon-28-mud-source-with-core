inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 9 }));
  set_short( "Passage - x1y11z9" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z9.c",
  "south" : DIR+"/rooms/x1y10z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
