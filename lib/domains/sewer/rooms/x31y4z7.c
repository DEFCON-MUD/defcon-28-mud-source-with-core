inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 4, 7 }));
  set_short( "Hallway - x31y4z7" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y4z7.c",
  "east" : DIR+"/rooms/x32y4z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
