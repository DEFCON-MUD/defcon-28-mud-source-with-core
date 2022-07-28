inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 8 }));
  set_short( "Hallway - x19y54z8" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y54z8.c",
  "north" : DIR+"/rooms/x19y55z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
