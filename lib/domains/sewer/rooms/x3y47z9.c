inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 47, 9 }));
  set_short( "Hallway - x3y47z9" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y48z9.c",
  "south" : DIR+"/rooms/x3y46z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
