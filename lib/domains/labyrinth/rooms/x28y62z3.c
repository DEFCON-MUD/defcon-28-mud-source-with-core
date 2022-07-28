inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 62, 3 }));
  set_short( "Passage - x28y62z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y62z3.c",
  "east" : DIR+"/rooms/x29y62z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
