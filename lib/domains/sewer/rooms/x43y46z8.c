inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 46, 8 }));
  set_short( "Corridor - x43y46z8" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y46z8.c",
  "south" : DIR+"/rooms/x43y45z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
