inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 18, 7 }));
  set_short( "Hallway - x46y18z7" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y18z7.c",
  "east" : DIR+"/rooms/x47y18z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
