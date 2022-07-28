inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 0, 7 }));
  set_short( "Passage - x16y0z7" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y0z7.c",
  "east" : DIR+"/rooms/x17y0z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
