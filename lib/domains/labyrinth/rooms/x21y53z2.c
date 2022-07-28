inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 53, 2 }));
  set_short( "Corridor - x21y53z2" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y54z2.c",
  "south" : DIR+"/rooms/x21y52z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
