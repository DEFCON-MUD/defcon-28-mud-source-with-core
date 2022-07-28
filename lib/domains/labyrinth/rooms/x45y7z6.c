inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 7, 6 }));
  set_short( "Corridor - x45y7z6" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y8z6.c",
  "south" : DIR+"/rooms/x45y6z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
