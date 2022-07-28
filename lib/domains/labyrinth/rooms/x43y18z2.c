inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 18, 2 }));
  set_short( "Passage - x43y18z2" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y18z2.c",
  "east" : DIR+"/rooms/x44y18z2.c",
  "south" : DIR+"/rooms/x43y17z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
