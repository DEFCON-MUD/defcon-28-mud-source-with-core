inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 26, 5 }));
  set_short( "Hallway - x22y26z5" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y26z5.c",
  "east" : DIR+"/rooms/x23y26z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
