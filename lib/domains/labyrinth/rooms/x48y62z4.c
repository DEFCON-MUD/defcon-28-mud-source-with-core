inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 62, 4 }));
  set_short( "Hallway - x48y62z4" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y62z4.c",
  "east" : DIR+"/rooms/x49y62z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
