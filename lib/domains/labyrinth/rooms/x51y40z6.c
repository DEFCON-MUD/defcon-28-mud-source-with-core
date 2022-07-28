inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 6 }));
  set_short( "Corridor - x51y40z6" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y40z6.c",
  "north" : DIR+"/rooms/x51y41z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
