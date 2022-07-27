inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 2 }));
  set_short( "Hallway - x55y10z2" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "south" : DIR+"/rooms/x55y9z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
