inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 0 }));
  set_short( "Corridor - x23y16z0" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y17z0.c",
  "south" : DIR+"/rooms/x23y15z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
