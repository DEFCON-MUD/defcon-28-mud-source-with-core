inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 41, 8 }));
  set_short( "Corridor - x25y41z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y42z8.c",
  "south" : DIR+"/rooms/x25y40z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
