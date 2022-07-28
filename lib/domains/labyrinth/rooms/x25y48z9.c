inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 9 }));
  set_short( "Passage - x25y48z9" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y49z9.c",
  "south" : DIR+"/rooms/x25y47z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
