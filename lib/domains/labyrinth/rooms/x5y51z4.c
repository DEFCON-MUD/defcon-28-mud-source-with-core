inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 51, 4 }));
  set_short( "Passage - x5y51z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y52z4.c",
  "south" : DIR+"/rooms/x5y50z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
