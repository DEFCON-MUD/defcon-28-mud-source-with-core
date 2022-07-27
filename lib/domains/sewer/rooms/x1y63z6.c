inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 63, 6 }));
  set_short( "Passage - x1y63z6" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y64z6.c",
  "south" : DIR+"/rooms/x1y62z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
