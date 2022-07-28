inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 2 }));
  set_short( "Corridor - x23y20z2" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y20z2.c",
  "north" : DIR+"/rooms/x23y21z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
