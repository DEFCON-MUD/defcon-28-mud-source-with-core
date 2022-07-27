inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 9 }));
  set_short( "Passage - x1y16z9" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y16z9.c",
  "south" : DIR+"/rooms/x1y15z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
