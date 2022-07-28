inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 12, 6 }));
  set_short( "Corridor - x49y12z6" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y12z6.c",
  "north" : DIR+"/rooms/x49y13z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
