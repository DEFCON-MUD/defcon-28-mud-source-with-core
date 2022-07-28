inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 32, 6 }));
  set_short( "Hallway - x1y32z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y33z6.c",
  "south" : DIR+"/rooms/x1y31z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
