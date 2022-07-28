inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 52, 0 }));
  set_short( "Passage - x42y52z0" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y52z0.c",
  "east" : DIR+"/rooms/x43y52z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
