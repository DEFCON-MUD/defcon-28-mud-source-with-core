inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 55, 0 }));
  set_short( "Corridor - x19y55z0" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y56z0.c",
  "south" : DIR+"/rooms/x19y54z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
