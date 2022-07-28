inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 14, 2 }));
  set_short( "Passage - x20y14z2" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y14z2.c",
  "east" : DIR+"/rooms/x21y14z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
