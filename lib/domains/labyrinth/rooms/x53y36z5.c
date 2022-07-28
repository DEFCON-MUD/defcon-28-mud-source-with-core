inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 36, 5 }));
  set_short( "Hallway - x53y36z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y37z5.c",
  "south" : DIR+"/rooms/x53y35z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
