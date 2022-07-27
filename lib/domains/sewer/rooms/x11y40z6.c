inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 40, 6 }));
  set_short( "Corridor - x11y40z6" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y40z6.c",
  "south" : DIR+"/rooms/x11y39z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
