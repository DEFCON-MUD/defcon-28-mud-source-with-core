inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 4 }));
  set_short( "Passage - x9y40z4" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y41z4.c",
  "south" : DIR+"/rooms/x9y39z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
