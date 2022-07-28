inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 51, 6 }));
  set_short( "Hallway - x43y51z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y52z6.c",
  "south" : DIR+"/rooms/x43y50z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
