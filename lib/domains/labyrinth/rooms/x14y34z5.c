inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 34, 5 }));
  set_short( "Corridor - x14y34z5" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y34z5.c",
  "east" : DIR+"/rooms/x15y34z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
