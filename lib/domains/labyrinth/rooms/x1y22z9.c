inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 9 }));
  set_short( "Passage - x1y22z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y22z9.c",
  "north" : DIR+"/rooms/x1y23z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
