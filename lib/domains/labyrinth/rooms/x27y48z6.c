inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 48, 6 }));
  set_short( "Passage - x27y48z6" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y49z6.c",
  "south" : DIR+"/rooms/x27y47z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
