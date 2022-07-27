inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 0, 7 }));
  set_short( "Corridor - x17y0z7" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y0z7.c",
  "east" : DIR+"/rooms/x18y0z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
