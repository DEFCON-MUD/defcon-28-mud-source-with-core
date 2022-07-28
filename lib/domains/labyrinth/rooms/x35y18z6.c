inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 6 }));
  set_short( "Passage - x35y18z6" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y18z6.c",
  "south" : DIR+"/rooms/x35y17z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
