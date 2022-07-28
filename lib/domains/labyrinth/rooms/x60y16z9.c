inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 16, 9 }));
  set_short( "Passage - x60y16z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y16z9.c",
  "east" : DIR+"/rooms/x61y16z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
