inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 3 }));
  set_short( "Corridor - x51y26z3" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y26z3.c",
  "north" : DIR+"/rooms/x51y27z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
