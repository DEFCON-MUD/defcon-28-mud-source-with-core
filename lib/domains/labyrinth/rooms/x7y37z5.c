inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 37, 5 }));
  set_short( "Passage - x7y37z5" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y38z5.c",
  "south" : DIR+"/rooms/x7y36z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
