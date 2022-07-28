inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 18, 6 }));
  set_short( "Corridor - x18y18z6" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y18z6.c",
  "east" : DIR+"/rooms/x19y18z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
