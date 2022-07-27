inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 8, 7 }));
  set_short( "Passage - x54y8z7" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y8z7.c",
  "east" : DIR+"/rooms/x55y8z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
