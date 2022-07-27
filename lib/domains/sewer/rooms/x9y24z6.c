inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 6 }));
  set_short( "Corridor - x9y24z6" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y24z6.c",
  "south" : DIR+"/rooms/x9y23z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
