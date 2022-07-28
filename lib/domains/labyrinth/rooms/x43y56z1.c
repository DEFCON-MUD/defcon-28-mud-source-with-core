inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 56, 1 }));
  set_short( "Passage - x43y56z1" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y56z1.c",
  "north" : DIR+"/rooms/x43y57z1.c",
  "south" : DIR+"/rooms/x43y55z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
