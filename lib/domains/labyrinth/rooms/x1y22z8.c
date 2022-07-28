inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 8 }));
  set_short( "Passage - x1y22z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y23z8.c",
  "south" : DIR+"/rooms/x1y21z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
