inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 35, 1 }));
  set_short( "Hallway - x37y35z1" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y36z1.c",
  "south" : DIR+"/rooms/x37y34z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
