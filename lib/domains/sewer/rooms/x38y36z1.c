inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 36, 1 }));
  set_short( "Passage - x38y36z1" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y36z1.c",
  "east" : DIR+"/rooms/x39y36z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
