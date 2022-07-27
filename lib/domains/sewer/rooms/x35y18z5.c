inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 5 }));
  set_short( "Passage - x35y18z5" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y18z5.c",
  "north" : DIR+"/rooms/x35y19z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
