inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 30, 8 }));
  set_short( "Passage - x4y30z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y30z8.c",
  "east" : DIR+"/rooms/x5y30z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
