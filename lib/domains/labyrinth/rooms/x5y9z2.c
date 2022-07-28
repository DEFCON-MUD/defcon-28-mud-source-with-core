inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 9, 2 }));
  set_short( "Passage - x5y9z2" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y10z2.c",
  "south" : DIR+"/rooms/x5y8z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
