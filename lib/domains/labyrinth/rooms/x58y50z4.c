inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 50, 4 }));
  set_short( "Hallway - x58y50z4" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y50z4.c",
  "east" : DIR+"/rooms/x59y50z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
