inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 8 }));
  set_short( "Passage - x27y24z8" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y24z8.c",
  "north" : DIR+"/rooms/x27y25z8.c",
  "south" : DIR+"/rooms/x27y23z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
