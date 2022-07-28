inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 5 }));
  set_short( "Corridor - x6y2z5" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z5.c",
  "east" : DIR+"/rooms/x7y2z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
