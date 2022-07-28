inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 0 }));
  set_short( "Corridor - x6y2z0" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z0.c",
  "east" : DIR+"/rooms/x7y2z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
