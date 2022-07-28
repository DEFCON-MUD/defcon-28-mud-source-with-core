inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 5, 1 }));
  set_short( "Hallway - x11y5z1" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y6z1.c",
  "south" : DIR+"/rooms/x11y4z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
