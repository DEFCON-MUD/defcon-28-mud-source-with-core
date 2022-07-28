inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 12, 9 }));
  set_short( "Passage - x33y12z9" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y13z9.c",
  "south" : DIR+"/rooms/x33y11z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
