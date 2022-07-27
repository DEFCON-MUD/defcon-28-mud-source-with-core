inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 15, 4 }));
  set_short( "Corridor - x11y15z4" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y16z4.c",
  "south" : DIR+"/rooms/x11y14z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
