inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 25, 4 }));
  set_short( "Passage - x49y25z4" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y26z4.c",
  "south" : DIR+"/rooms/x49y24z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
