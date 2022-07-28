inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 59, 6 }));
  set_short( "Passage - x47y59z6" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y60z6.c",
  "south" : DIR+"/rooms/x47y58z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
