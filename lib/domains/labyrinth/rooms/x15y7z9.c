inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 9 }));
  set_short( "Hallway - x15y7z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z9.c",
  "south" : DIR+"/rooms/x15y6z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
