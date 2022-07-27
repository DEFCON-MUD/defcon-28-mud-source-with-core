inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 13, 6 }));
  set_short( "Hallway - x59y13z6" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y14z6.c",
  "south" : DIR+"/rooms/x59y12z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
