inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 8 }));
  set_short( "Passage - x55y56z8" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y56z8.c",
  "south" : DIR+"/rooms/x55y55z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
