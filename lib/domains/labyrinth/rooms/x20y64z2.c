inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 64, 2 }));
  set_short( "Passage - x20y64z2" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y64z2.c",
  "east" : DIR+"/rooms/x21y64z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
