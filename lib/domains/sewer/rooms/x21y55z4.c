inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 55, 4 }));
  set_short( "Passage - x21y55z4" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y56z4.c",
  "south" : DIR+"/rooms/x21y54z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
