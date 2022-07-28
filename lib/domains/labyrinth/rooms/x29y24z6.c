inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 24, 6 }));
  set_short( "Passage - x29y24z6" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y24z6.c",
  "south" : DIR+"/rooms/x29y23z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
