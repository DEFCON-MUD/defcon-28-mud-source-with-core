inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 0 }));
  set_short( "Corridor - x15y24z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y24z0.c",
  "south" : DIR+"/rooms/x15y23z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
