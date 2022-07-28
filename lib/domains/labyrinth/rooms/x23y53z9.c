inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 53, 9 }));
  set_short( "Passage - x23y53z9" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y54z9.c",
  "south" : DIR+"/rooms/x23y52z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
