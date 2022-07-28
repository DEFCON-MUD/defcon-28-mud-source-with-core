inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 6 }));
  set_short( "Corridor - x19y11z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z6.c",
  "south" : DIR+"/rooms/x19y10z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
