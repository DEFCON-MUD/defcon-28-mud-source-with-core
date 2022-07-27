inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 6 }));
  set_short( "Hallway - x31y27z6" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z6.c",
  "south" : DIR+"/rooms/x31y26z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
