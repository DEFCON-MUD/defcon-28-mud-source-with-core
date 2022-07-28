inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 10, 2 }));
  set_short( "Passage - x48y10z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y10z2.c",
  "east" : DIR+"/rooms/x49y10z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
